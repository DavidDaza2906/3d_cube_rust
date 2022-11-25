// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_PointOfService_Provider_0_H
#define WINRT_Windows_Devices_PointOfService_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::PointOfService
{
    struct BarcodeScannerReport;
    struct BarcodeSymbologyAttributes;
    struct UnifiedPosErrorData;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    enum class BitmapPixelFormat : int32_t;
    struct BitmapSize;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
WINRT_EXPORT namespace winrt::Windows::Devices::PointOfService::Provider
{
    enum class BarcodeScannerTriggerState : int32_t
    {
        Released = 0,
        Pressed = 1,
    };
    struct IBarcodeScannerDisableScannerRequest;
    struct IBarcodeScannerDisableScannerRequest2;
    struct IBarcodeScannerDisableScannerRequestEventArgs;
    struct IBarcodeScannerEnableScannerRequest;
    struct IBarcodeScannerEnableScannerRequest2;
    struct IBarcodeScannerEnableScannerRequestEventArgs;
    struct IBarcodeScannerFrameReader;
    struct IBarcodeScannerFrameReaderFrameArrivedEventArgs;
    struct IBarcodeScannerGetSymbologyAttributesRequest;
    struct IBarcodeScannerGetSymbologyAttributesRequest2;
    struct IBarcodeScannerGetSymbologyAttributesRequestEventArgs;
    struct IBarcodeScannerHideVideoPreviewRequest;
    struct IBarcodeScannerHideVideoPreviewRequest2;
    struct IBarcodeScannerHideVideoPreviewRequestEventArgs;
    struct IBarcodeScannerProviderConnection;
    struct IBarcodeScannerProviderConnection2;
    struct IBarcodeScannerProviderTriggerDetails;
    struct IBarcodeScannerSetActiveSymbologiesRequest;
    struct IBarcodeScannerSetActiveSymbologiesRequest2;
    struct IBarcodeScannerSetActiveSymbologiesRequestEventArgs;
    struct IBarcodeScannerSetSymbologyAttributesRequest;
    struct IBarcodeScannerSetSymbologyAttributesRequest2;
    struct IBarcodeScannerSetSymbologyAttributesRequestEventArgs;
    struct IBarcodeScannerStartSoftwareTriggerRequest;
    struct IBarcodeScannerStartSoftwareTriggerRequest2;
    struct IBarcodeScannerStartSoftwareTriggerRequestEventArgs;
    struct IBarcodeScannerStopSoftwareTriggerRequest;
    struct IBarcodeScannerStopSoftwareTriggerRequest2;
    struct IBarcodeScannerStopSoftwareTriggerRequestEventArgs;
    struct IBarcodeScannerVideoFrame;
    struct IBarcodeSymbologyAttributesBuilder;
    struct BarcodeScannerDisableScannerRequest;
    struct BarcodeScannerDisableScannerRequestEventArgs;
    struct BarcodeScannerEnableScannerRequest;
    struct BarcodeScannerEnableScannerRequestEventArgs;
    struct BarcodeScannerFrameReader;
    struct BarcodeScannerFrameReaderFrameArrivedEventArgs;
    struct BarcodeScannerGetSymbologyAttributesRequest;
    struct BarcodeScannerGetSymbologyAttributesRequestEventArgs;
    struct BarcodeScannerHideVideoPreviewRequest;
    struct BarcodeScannerHideVideoPreviewRequestEventArgs;
    struct BarcodeScannerProviderConnection;
    struct BarcodeScannerProviderTriggerDetails;
    struct BarcodeScannerSetActiveSymbologiesRequest;
    struct BarcodeScannerSetActiveSymbologiesRequestEventArgs;
    struct BarcodeScannerSetSymbologyAttributesRequest;
    struct BarcodeScannerSetSymbologyAttributesRequestEventArgs;
    struct BarcodeScannerStartSoftwareTriggerRequest;
    struct BarcodeScannerStartSoftwareTriggerRequestEventArgs;
    struct BarcodeScannerStopSoftwareTriggerRequest;
    struct BarcodeScannerStopSoftwareTriggerRequestEventArgs;
    struct BarcodeScannerVideoFrame;
    struct BarcodeSymbologyAttributesBuilder;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>{ using type = interface_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReaderFrameArrivedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerVideoFrame>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder>{ using type = class_category; };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerDisableScannerRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerDisableScannerRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerEnableScannerRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerEnableScannerRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerFrameReader";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReaderFrameArrivedEventArgs> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerFrameReaderFrameArrivedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerGetSymbologyAttributesRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerGetSymbologyAttributesRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerHideVideoPreviewRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerHideVideoPreviewRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerProviderConnection";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerProviderTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerSetActiveSymbologiesRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerSetActiveSymbologiesRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerSetSymbologyAttributesRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerSetSymbologyAttributesRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerStartSoftwareTriggerRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerStartSoftwareTriggerRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerStopSoftwareTriggerRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerStopSoftwareTriggerRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerVideoFrame> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerVideoFrame";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder> = L"Windows.Devices.PointOfService.Provider.BarcodeSymbologyAttributesBuilder";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState> = L"Windows.Devices.PointOfService.Provider.BarcodeScannerTriggerState";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerDisableScannerRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerDisableScannerRequest2";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerDisableScannerRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerEnableScannerRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerEnableScannerRequest2";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerEnableScannerRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerFrameReader";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerFrameReaderFrameArrivedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerGetSymbologyAttributesRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerGetSymbologyAttributesRequest2";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerGetSymbologyAttributesRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerHideVideoPreviewRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerHideVideoPreviewRequest2";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerHideVideoPreviewRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerProviderConnection";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection2> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerProviderConnection2";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerProviderTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetActiveSymbologiesRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetActiveSymbologiesRequest2";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetActiveSymbologiesRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetSymbologyAttributesRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetSymbologyAttributesRequest2";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetSymbologyAttributesRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStartSoftwareTriggerRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStartSoftwareTriggerRequest2";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStartSoftwareTriggerRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStopSoftwareTriggerRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStopSoftwareTriggerRequest2";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStopSoftwareTriggerRequestEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame> = L"Windows.Devices.PointOfService.Provider.IBarcodeScannerVideoFrame";
    template <> inline constexpr auto& name_v<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder> = L"Windows.Devices.PointOfService.Provider.IBarcodeSymbologyAttributesBuilder";
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>{ 0x88ECF7C0,0x37B9,0x4275,{ 0x8E,0x77,0xC8,0xE5,0x2A,0xE5,0xA9,0xC8 } }; // 88ECF7C0-37B9-4275-8E77-C8E52AE5A9C8
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>{ 0xCCDFE625,0x65C3,0x4CCC,{ 0xB4,0x57,0xF3,0x9C,0x7A,0x9E,0xA6,0x0D } }; // CCDFE625-65C3-4CCC-B457-F39C7A9EA60D
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>{ 0x7006E142,0xE802,0x46F5,{ 0xB6,0x04,0x35,0x2A,0x15,0xCE,0x92,0x32 } }; // 7006E142-E802-46F5-B604-352A15CE9232
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>{ 0xC0B3E9BA,0x816A,0x452B,{ 0xBD,0x77,0xB7,0xE4,0x53,0xEC,0x44,0x6D } }; // C0B3E9BA-816A-452B-BD77-B7E453EC446D
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>{ 0x71A4F2A8,0x9905,0x41AC,{ 0x91,0x21,0xB6,0x45,0x91,0x6A,0x84,0xA1 } }; // 71A4F2A8-9905-41AC-9121-B645916A84A1
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>{ 0x956C9419,0x7B4E,0x4451,{ 0x8C,0x41,0x8E,0x10,0xCF,0xBC,0x5B,0x41 } }; // 956C9419-7B4E-4451-8C41-8E10CFBC5B41
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader>{ 0xDBC72B07,0x64C3,0x482B,{ 0x93,0xC8,0x65,0xFB,0x33,0xC2,0x22,0x08 } }; // DBC72B07-64C3-482B-93C8-65FB33C22208
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs>{ 0xB0BBD604,0x54FD,0x436D,{ 0x86,0x29,0x71,0x2E,0x78,0x72,0x23,0xDD } }; // B0BBD604-54FD-436D-8629-712E787223DD
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>{ 0x9774C46A,0x58E4,0x4C5F,{ 0xB8,0xE9,0xE4,0x14,0x67,0x63,0x27,0x00 } }; // 9774C46A-58E4-4C5F-B8E9-E41467632700
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>{ 0x6A6A2B13,0x75A8,0x49FB,{ 0xB8,0x52,0xBF,0xB9,0x3D,0x76,0x0A,0xF7 } }; // 6A6A2B13-75A8-49FB-B852-BFB93D760AF7
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>{ 0x7F89DE3E,0xFB5D,0x493C,{ 0xB4,0x02,0x35,0x6B,0x24,0xD5,0x74,0xA6 } }; // 7F89DE3E-FB5D-493C-B402-356B24D574A6
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>{ 0xFA4EBE7F,0x6670,0x40E1,{ 0xB9,0x0B,0xBB,0x10,0xD8,0xD4,0x25,0xFA } }; // FA4EBE7F-6670-40E1-B90B-BB10D8D425FA
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>{ 0x7E28435D,0x9814,0x431D,{ 0xA2,0xF2,0xD6,0x24,0x8C,0x5A,0xD4,0xB5 } }; // 7E28435D-9814-431D-A2F2-D6248C5AD4B5
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>{ 0x16A281FC,0xD6BE,0x4BC7,{ 0x9D,0xF1,0x33,0x74,0x1F,0x3E,0xAD,0xEA } }; // 16A281FC-D6BE-4BC7-9DF1-33741F3EADEA
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>{ 0xB44ACBED,0x0B3A,0x4FA3,{ 0x86,0xC5,0x49,0x1E,0xA3,0x07,0x80,0xEB } }; // B44ACBED-0B3A-4FA3-86C5-491EA30780EB
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection2>{ 0xBE9B53CD,0x1134,0x418C,{ 0xA0,0x6B,0x04,0x42,0x3A,0x73,0xF3,0xD7 } }; // BE9B53CD-1134-418C-A06B-04423A73F3D7
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>{ 0x50856D82,0x24E3,0x48CE,{ 0x99,0xC7,0x70,0xAA,0xC1,0xCB,0xC9,0xF7 } }; // 50856D82-24E3-48CE-99C7-70AAC1CBC9F7
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>{ 0xDB3F32B9,0xF7DA,0x41A1,{ 0x9F,0x79,0x07,0xBC,0xD9,0x5F,0x0B,0xDF } }; // DB3F32B9-F7DA-41A1-9F79-07BCD95F0BDF
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>{ 0xF5FF6EDF,0xFA9A,0x4749,{ 0xB1,0x1B,0xE8,0xFC,0xCB,0x75,0xBC,0x6B } }; // F5FF6EDF-FA9A-4749-B11B-E8FCCB75BC6B
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>{ 0x06305AFA,0x7BF6,0x4D52,{ 0x80,0x1A,0x33,0x02,0x72,0xF6,0x0A,0xE1 } }; // 06305AFA-7BF6-4D52-801A-330272F60AE1
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>{ 0x32FB814F,0xA37F,0x48B0,{ 0xAC,0xEA,0xDC,0xE1,0x48,0x0F,0x12,0xAE } }; // 32FB814F-A37F-48B0-ACEA-DCE1480F12AE
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>{ 0xDFFBBFC1,0xDBA8,0x4B77,{ 0xBE,0x1E,0xB5,0x6C,0xD7,0x2F,0x65,0xB3 } }; // DFFBBFC1-DBA8-4B77-BE1E-B56CD72F65B3
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>{ 0xB2B89809,0x9824,0x47D4,{ 0x85,0xBD,0xD0,0x07,0x7B,0xAA,0x7B,0xD2 } }; // B2B89809-9824-47D4-85BD-D0077BAA7BD2
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>{ 0xE3FA7B27,0xFF62,0x4454,{ 0xAF,0x4A,0xCB,0x61,0x44,0xA3,0xE3,0xF7 } }; // E3FA7B27-FF62-4454-AF4A-CB6144A3E3F7
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>{ 0xEB72A25C,0x6658,0x4765,{ 0xA6,0x8E,0x32,0x74,0x82,0x65,0x3D,0xEB } }; // EB72A25C-6658-4765-A68E-327482653DEB
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>{ 0x2305D843,0xC88F,0x4F3B,{ 0x8C,0x3B,0xD3,0xDF,0x07,0x10,0x51,0xEC } }; // 2305D843-C88F-4F3B-8C3B-D3DF071051EC
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>{ 0x6F9FAF35,0xE287,0x4CA8,{ 0xB7,0x0D,0x5A,0x91,0xD6,0x94,0xF6,0x68 } }; // 6F9FAF35-E287-4CA8-B70D-5A91D694F668
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>{ 0xCB57C5DD,0xFE50,0x49F8,{ 0xA0,0xB4,0xBD,0xC2,0x30,0x81,0x4D,0xA2 } }; // CB57C5DD-FE50-49F8-A0B4-BDC230814DA2
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>{ 0xEAC34450,0x4EB7,0x481A,{ 0x92,0x73,0x14,0x7A,0x27,0x3B,0x99,0xB8 } }; // EAC34450-4EB7-481A-9273-147A273B99B8
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame>{ 0x7E585248,0x9DF7,0x4121,{ 0xA1,0x75,0x80,0x1D,0x80,0x00,0x11,0x2E } }; // 7E585248-9DF7-4121-A175-801D8000112E
    template <> inline constexpr guid guid_v<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>{ 0xC57B0CBF,0xE4F5,0x40B9,{ 0x84,0xCF,0xE6,0x3F,0xBA,0xEA,0x42,0xB4 } }; // C57B0CBF-E4F5-40B9-84CF-E63FBAEA42B4
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReaderFrameArrivedEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerVideoFrame>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame; };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder; };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryAcquireLatestFrameAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
            virtual int32_t __stdcall add_FrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameArrived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Symbology(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedSymbologies(void**) noexcept = 0;
            virtual int32_t __stdcall get_CompanyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_CompanyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Version(void**) noexcept = 0;
            virtual int32_t __stdcall put_Version(void*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall ReportScannedDataAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportTriggerStateAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportErrorAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportErrorAsyncWithScanReport(void*, bool, void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_EnableScannerRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnableScannerRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DisableScannerRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisableScannerRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SetActiveSymbologiesRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SetActiveSymbologiesRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StartSoftwareTriggerRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StartSoftwareTriggerRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StopSoftwareTriggerRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StopSoftwareTriggerRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GetBarcodeSymbologyAttributesRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GetBarcodeSymbologyAttributesRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SetBarcodeSymbologyAttributesRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SetBarcodeSymbologyAttributesRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_HideVideoPreviewRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HideVideoPreviewRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFrameReaderAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameReaderWithFormatAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameReaderWithFormatAndSizeAsync(int32_t, struct struct_Windows_Graphics_Imaging_BitmapSize, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Symbologies(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Symbology(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Attributes(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Format(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PixelData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCheckDigitValidationSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCheckDigitValidationSupported(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCheckDigitTransmissionSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCheckDigitTransmissionSupported(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsDecodeLengthSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDecodeLengthSupported(bool) noexcept = 0;
            virtual int32_t __stdcall CreateAttributes(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequest
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportCompletedAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequest2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest) Request() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequest
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportCompletedAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequest2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest) Request() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerFrameReader
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) StartAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StopAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::Provider::BarcodeScannerVideoFrame>) TryAcquireLatestFrameAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection) Connection() const;
        WINRT_IMPL_AUTO(winrt::event_token) FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader, Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReaderFrameArrivedEventArgs> const& handler) const;
        using FrameArrived_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader>::remove_FrameArrived>;
        [[nodiscard]] FrameArrived_revoker FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader, Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReaderFrameArrivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) FrameArrived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerFrameReader<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerFrameReaderFrameArrivedEventArgs
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerFrameReaderFrameArrivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Symbology() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportCompletedAsync(Windows::Devices::PointOfService::BarcodeSymbologyAttributes const& attributes) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest) Request() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequest
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportCompletedAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequest2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest) Request() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoDeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<uint32_t>) SupportedSymbologies() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CompanyName() const;
        WINRT_IMPL_AUTO(void) CompanyName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Version() const;
        WINRT_IMPL_AUTO(void) Version(param::hstring const& value) const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportScannedDataAsync(Windows::Devices::PointOfService::BarcodeScannerReport const& report) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportTriggerStateAsync(Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState const& state) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportErrorAsync(Windows::Devices::PointOfService::UnifiedPosErrorData const& errorData) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportErrorAsync(Windows::Devices::PointOfService::UnifiedPosErrorData const& errorData, bool isRetriable, Windows::Devices::PointOfService::BarcodeScannerReport const& scanReport) const;
        WINRT_IMPL_AUTO(winrt::event_token) EnableScannerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs> const& handler) const;
        using EnableScannerRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_EnableScannerRequested>;
        [[nodiscard]] EnableScannerRequested_revoker EnableScannerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) EnableScannerRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) DisableScannerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs> const& handler) const;
        using DisableScannerRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_DisableScannerRequested>;
        [[nodiscard]] DisableScannerRequested_revoker DisableScannerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) DisableScannerRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SetActiveSymbologiesRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs> const& handler) const;
        using SetActiveSymbologiesRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_SetActiveSymbologiesRequested>;
        [[nodiscard]] SetActiveSymbologiesRequested_revoker SetActiveSymbologiesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SetActiveSymbologiesRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) StartSoftwareTriggerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs> const& handler) const;
        using StartSoftwareTriggerRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_StartSoftwareTriggerRequested>;
        [[nodiscard]] StartSoftwareTriggerRequested_revoker StartSoftwareTriggerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) StartSoftwareTriggerRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) StopSoftwareTriggerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs> const& handler) const;
        using StopSoftwareTriggerRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_StopSoftwareTriggerRequested>;
        [[nodiscard]] StopSoftwareTriggerRequested_revoker StopSoftwareTriggerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) StopSoftwareTriggerRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) GetBarcodeSymbologyAttributesRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs> const& handler) const;
        using GetBarcodeSymbologyAttributesRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_GetBarcodeSymbologyAttributesRequested>;
        [[nodiscard]] GetBarcodeSymbologyAttributesRequested_revoker GetBarcodeSymbologyAttributesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) GetBarcodeSymbologyAttributesRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SetBarcodeSymbologyAttributesRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs> const& handler) const;
        using SetBarcodeSymbologyAttributesRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_SetBarcodeSymbologyAttributesRequested>;
        [[nodiscard]] SetBarcodeSymbologyAttributesRequested_revoker SetBarcodeSymbologyAttributesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SetBarcodeSymbologyAttributesRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) HideVideoPreviewRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs> const& handler) const;
        using HideVideoPreviewRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_HideVideoPreviewRequested>;
        [[nodiscard]] HideVideoPreviewRequested_revoker HideVideoPreviewRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) HideVideoPreviewRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader>) CreateFrameReaderAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader>) CreateFrameReaderAsync(Windows::Graphics::Imaging::BitmapPixelFormat const& preferredFormat) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader>) CreateFrameReaderAsync(Windows::Graphics::Imaging::BitmapPixelFormat const& preferredFormat, Windows::Graphics::Imaging::BitmapSize const& preferredSize) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection) Connection() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) Symbologies() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportCompletedAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest) Request() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Symbology() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::PointOfService::BarcodeSymbologyAttributes) Attributes() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportCompletedAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest) Request() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequest
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportCompletedAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequest2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest) Request() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequest
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportCompletedAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequest2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest) Request() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerVideoFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Imaging::BitmapPixelFormat) Format() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Width() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Height() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) PixelData() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerVideoFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCheckDigitValidationSupported() const;
        WINRT_IMPL_AUTO(void) IsCheckDigitValidationSupported(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCheckDigitTransmissionSupported() const;
        WINRT_IMPL_AUTO(void) IsCheckDigitTransmissionSupported(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDecodeLengthSupported() const;
        WINRT_IMPL_AUTO(void) IsDecodeLengthSupported(bool value) const;
        WINRT_IMPL_AUTO(Windows::Devices::PointOfService::BarcodeSymbologyAttributes) CreateAttributes() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder<D>;
    };
}
#endif
