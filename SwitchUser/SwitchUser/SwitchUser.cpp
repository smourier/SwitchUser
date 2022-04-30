#include <windows.h>
#include <stdio.h>
#include <wrl.h>
#include <wrl/wrappers/corewrappers.h>
#include "UserTileMenu_h.h"

#pragma comment(lib, "runtimeobject.lib")

using namespace Microsoft::WRL; // ComPtr
using namespace Microsoft::WRL::Wrappers; // RoInitializeWrapper, HStringReference
using namespace ABI::Windows::Foundation; // GetActivationFactory
using namespace ABI::Windows::Foundation::Collections; // IVectorView
using namespace ABI::Windows::Internal::Shell::StartUI;

int main()
{
	HRESULT hr = S_OK;
	{
		// initialize COM
		RoInitializeWrapper init(RO_INIT_MULTITHREADED);
		hr = init;
		if (FAILED(hr))
		{
			wprintf(L"RoInitialize failed\n");
			goto cleanup;
		}

		// create class instance
		ComPtr<IUserTileMenuStatics> menu;
		hr = GetActivationFactory(HStringReference(RuntimeClass_Windows_Internal_Shell_StartUI_UserTileMenu).Get(), &menu);
		if (FAILED(hr))
		{
			wprintf(L"GetActivationFactory failed\n");
			goto cleanup;
		}

		// ask for current user and possible switchable users list
		ComPtr<IVectorView<IUserTileSwitchUser*>> list;
		ComPtr<IUserTileSwitchUser> currentUser;
		hr = menu->GetSwitchUserListWithCurrentUser(&currentUser, &list);
		if (FAILED(hr))
		{
			wprintf(L"GetSwitchUserListWithCurrentUser failed\n");
			goto cleanup;
		}

		// get current user
		HString cname;
		currentUser->get_DisplayName(cname.GetAddressOf());
		HString csid;
		currentUser->get_UserSid(csid.GetAddressOf());
		wprintf(L"Current user:\n %s (SID:%s)\n", cname.GetRawBuffer(nullptr), csid.GetRawBuffer(nullptr));
		wprintf(L"\n");

		// get commands
		ComPtr<IVectorView<IUserTileCommand*>> commands;
		hr = menu->GetCommands(&commands);
		if (FAILED(hr))
		{
			wprintf(L"GetCommands failed\n");
			goto cleanup;
		}

		unsigned int count;
		commands->get_Size(&count);

		for (unsigned int i = 0; i < count; i++)
		{
			// get command #i
			ComPtr<IUserTileCommand> command;
			if (SUCCEEDED(commands->GetAt(i, &command)))
			{
				int id;
				command->get_Id(&id);
				wprintf(L"Command id: %u\n", id);

				// 0 => Account Info
				// 1 => Lock
				// 2 => Logoff
			}
		}
		wprintf(L"\n");

		// get number of switchable users
		count = 0;
		list->get_Size(&count);

		for (unsigned int i = 0; i < count; i++)
		{
			// get switchable user #i
			ComPtr<IUserTileSwitchUser> user;
			if (SUCCEEDED(list->GetAt(i, &user)))
			{
				HString name;
				user->get_DisplayName(name.GetAddressOf());
				HString sid;
				user->get_UserSid(sid.GetAddressOf());
				wprintf(L"Press %i to switch to user:\n %s (SID:%s)\n", (i + 1), name.GetRawBuffer(nullptr), sid.GetRawBuffer(nullptr));
				wprintf(L"\n");
			}
		}

		unsigned int c = getchar();
		c = c - '0' - 1;
		if (c >= 0 && c < count)
		{
			ComPtr<IUserTileSwitchUser> user;
			if (SUCCEEDED(list->GetAt(c, &user)))
			{
				// enter the vortex
				hr = user->SwitchTo();
			}
		}
	}

cleanup:
	if (FAILED(hr))
	{
		wprintf(L"Failed hr:0x%08X\n", hr);
	}
	return 0;
}
