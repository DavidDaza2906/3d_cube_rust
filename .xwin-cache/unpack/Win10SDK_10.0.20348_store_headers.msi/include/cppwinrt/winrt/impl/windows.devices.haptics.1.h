// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Haptics_1_H
#define WINRT_Windows_Devices_Haptics_1_H
#include "winrt/impl/Windows.Devices.Haptics.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Haptics
{
    struct __declspec(empty_bases) IKnownSimpleHapticsControllerWaveformsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKnownSimpleHapticsControllerWaveformsStatics>
    {
        IKnownSimpleHapticsControllerWaveformsStatics(std::nullptr_t = nullptr) noexcept {}
        IKnownSimpleHapticsControllerWaveformsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISimpleHapticsController :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISimpleHapticsController>
    {
        ISimpleHapticsController(std::nullptr_t = nullptr) noexcept {}
        ISimpleHapticsController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISimpleHapticsControllerFeedback :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISimpleHapticsControllerFeedback>
    {
        ISimpleHapticsControllerFeedback(std::nullptr_t = nullptr) noexcept {}
        ISimpleHapticsControllerFeedback(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVibrationDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVibrationDevice>
    {
        IVibrationDevice(std::nullptr_t = nullptr) noexcept {}
        IVibrationDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVibrationDeviceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVibrationDeviceStatics>
    {
        IVibrationDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        IVibrationDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
