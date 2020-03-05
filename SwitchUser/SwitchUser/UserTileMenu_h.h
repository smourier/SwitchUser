/* Header file automatically generated from UserTileMenu.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0226 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __UserTileMenu_h_h__
#define __UserTileMenu_h_h__
#ifndef __UserTileMenu_h_p_h__
#define __UserTileMenu_h_p_h__


#pragma once

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x80000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "Windows.Foundation.h"
#include "Windows.Storage.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Internal {
            namespace Shell {
                namespace StartUI {
                    interface IUserTileSwitchUser;
                } /* StartUI */
            } /* Shell */
        } /* Internal */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser

#endif // ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Internal {
            namespace Shell {
                namespace StartUI {
                    interface IUserTileMenuStatics;
                } /* StartUI */
            } /* Shell */
        } /* Internal */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics ABI::Windows::Internal::Shell::StartUI::IUserTileMenuStatics

#endif // ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_USE
#define DEF___FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f9526c4f-091e-5060-9c44-cf10dfc102ac"))
IIterator<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*> : IIterator_impl<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Internal.Shell.StartUI.IUserTileSwitchUser>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*> __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_t;
#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*>
//#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_USE
#define DEF___FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("127d0378-3869-5449-a4e1-c0e447175fc1"))
IIterable<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*> : IIterable_impl<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Internal.Shell.StartUI.IUserTileSwitchUser>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*> __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_t;
#define __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*>
//#define __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_USE
#define DEF___FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("880fd39f-a31a-59ba-8cea-96c27b78a482"))
IVectorView<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*> : IVectorView_impl<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Internal.Shell.StartUI.IUserTileSwitchUser>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*> __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_t;
#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*>
//#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




/*
 *
 * Interface Windows.Internal.Shell.StartUI.IUserTileSwitchUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Internal_Shell_StartUI_IUserTileSwitchUser[] = L"Windows.Internal.Shell.StartUI.IUserTileSwitchUser";
namespace ABI {
    namespace Windows {
        namespace Internal {
            namespace Shell {
                namespace StartUI {
                    /* [object, uuid("94432454-c6ac-40c0-ba40-d5c31a0c5136"), contract] */
                    MIDL_INTERFACE("94432454-c6ac-40c0-ba40-d5c31a0c5136")
                    IUserTileSwitchUser : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                            /* [retval, out] */HSTRING * name
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_UserSid(
                            /* [retval, out] */HSTRING * sid
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_IsTabletMode(
                            /* [retval, out] */::boolean * mode
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAccountPicture(
                            /* [out] */ABI::Windows::Storage::IStorageFile * * picture
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SwitchTo(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserTileSwitchUser=_uuidof(IUserTileSwitchUser);
                    
                } /* StartUI */
            } /* Shell */
        } /* Internal */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser;
#endif /* !defined(____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Internal.Shell.StartUI.IUserTileMenuStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Internal.Shell.StartUI.UserTileMenu
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Internal_Shell_StartUI_IUserTileMenuStatics[] = L"Windows.Internal.Shell.StartUI.IUserTileMenuStatics";
namespace ABI {
    namespace Windows {
        namespace Internal {
            namespace Shell {
                namespace StartUI {
                    /* [object, uuid("1727f7b0-3bd5-4256-8e75-680f9f6cadb4"), exclusiveto, contract] */
                    MIDL_INTERFACE("1727f7b0-3bd5-4256-8e75-680f9f6cadb4")
                    IUserTileMenuStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE UndefinedDontUse(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSwitchUserList(
                            /* [out] */__FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * * view
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSwitchUserListWithCurrentUser(
                            /* [out] */ABI::Windows::Internal::Shell::StartUI::IUserTileSwitchUser * * user,
                            /* [out] */__FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * * view
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserTileMenuStatics=_uuidof(IUserTileMenuStatics);
                    
                } /* StartUI */
            } /* Shell */
        } /* Internal */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics;
#endif /* !defined(____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Internal.Shell.StartUI.UserTileMenu
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Internal.Shell.StartUI.IUserTileMenuStatics ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Internal_Shell_StartUI_UserTileMenu_DEFINED
#define RUNTIMECLASS_Windows_Internal_Shell_StartUI_UserTileMenu_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Internal_Shell_StartUI_UserTileMenu[] = L"Windows.Internal.Shell.StartUI.UserTileMenu";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser;

#endif // ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics;

#endif // ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser;

typedef struct __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUserVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUserVtbl;

interface __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser
{
    CONST_VTBL struct __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUserVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser;

typedef  struct __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUserVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser **first);

    END_INTERFACE
} __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUserVtbl;

interface __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser
{
    CONST_VTBL struct __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUserVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser;

typedef struct __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUserVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
            /* [in] */ __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUserVtbl;

interface __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser
{
    CONST_VTBL struct __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUserVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



/*
 *
 * Interface Windows.Internal.Shell.StartUI.IUserTileSwitchUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Internal_Shell_StartUI_IUserTileSwitchUser[] = L"Windows.Internal.Shell.StartUI.IUserTileSwitchUser";
/* [object, uuid("94432454-c6ac-40c0-ba40-d5c31a0c5136"), contract] */
typedef struct __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * This,
        /* [retval, out] */HSTRING * name
        );
    HRESULT ( STDMETHODCALLTYPE *get_UserSid )(
        __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * This,
        /* [retval, out] */HSTRING * sid
        );
    HRESULT ( STDMETHODCALLTYPE *get_IsTabletMode )(
        __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * This,
        /* [retval, out] */boolean * mode
        );
    HRESULT ( STDMETHODCALLTYPE *GetAccountPicture )(
        __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * This,
        /* [out] */__x_ABI_CWindows_CStorage_CIStorageFile * * picture
        );
    HRESULT ( STDMETHODCALLTYPE *SwitchTo )(
        __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUserVtbl;

interface __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser
{
    CONST_VTBL struct __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUserVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_get_DisplayName(This,name) \
    ( (This)->lpVtbl->get_DisplayName(This,name) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_get_UserSid(This,sid) \
    ( (This)->lpVtbl->get_UserSid(This,sid) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_get_IsTabletMode(This,mode) \
    ( (This)->lpVtbl->get_IsTabletMode(This,mode) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_GetAccountPicture(This,picture) \
    ( (This)->lpVtbl->GetAccountPicture(This,picture) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_SwitchTo(This) \
    ( (This)->lpVtbl->SwitchTo(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser;
#endif /* !defined(____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Internal.Shell.StartUI.IUserTileMenuStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Internal.Shell.StartUI.UserTileMenu
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Internal_Shell_StartUI_IUserTileMenuStatics[] = L"Windows.Internal.Shell.StartUI.IUserTileMenuStatics";
/* [object, uuid("1727f7b0-3bd5-4256-8e75-680f9f6cadb4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *UndefinedDontUse )(
        __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetSwitchUserList )(
        __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics * This,
        /* [out] */__FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * * view
        );
    HRESULT ( STDMETHODCALLTYPE *GetSwitchUserListWithCurrentUser )(
        __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics * This,
        /* [out] */__x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileSwitchUser * * user,
        /* [out] */__FIVectorView_1_Windows__CInternal__CShell__CStartUI__CIUserTileSwitchUser * * view
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStaticsVtbl;

interface __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_UndefinedDontUse(This) \
    ( (This)->lpVtbl->UndefinedDontUse(This) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_GetSwitchUserList(This,view) \
    ( (This)->lpVtbl->GetSwitchUserList(This,view) )

#define __x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_GetSwitchUserListWithCurrentUser(This,user,view) \
    ( (This)->lpVtbl->GetSwitchUserListWithCurrentUser(This,user,view) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics;
#endif /* !defined(____x_ABI_CWindows_CInternal_CShell_CStartUI_CIUserTileMenuStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Internal.Shell.StartUI.UserTileMenu
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Internal.Shell.StartUI.IUserTileMenuStatics ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Internal_Shell_StartUI_UserTileMenu_DEFINED
#define RUNTIMECLASS_Windows_Internal_Shell_StartUI_UserTileMenu_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Internal_Shell_StartUI_UserTileMenu[] = L"Windows.Internal.Shell.StartUI.UserTileMenu";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __UserTileMenu_h_p_h__

#endif // __UserTileMenu_h_h__
