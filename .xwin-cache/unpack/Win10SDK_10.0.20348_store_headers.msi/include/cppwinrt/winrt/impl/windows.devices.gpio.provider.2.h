// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Gpio_Provider_2_H
#define WINRT_Windows_Devices_Gpio_Provider_2_H
#include "winrt/impl/Windows.Devices.Gpio.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Gpio::Provider
{
    struct __declspec(empty_bases) GpioPinProviderValueChangedEventArgs : Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs
    {
        GpioPinProviderValueChangedEventArgs(std::nullptr_t) noexcept {}
        GpioPinProviderValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs(ptr, take_ownership_from_abi) {}
        explicit GpioPinProviderValueChangedEventArgs(Windows::Devices::Gpio::Provider::ProviderGpioPinEdge const& edge);
    };
}
#endif
