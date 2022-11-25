// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Payments_Provider_1_H
#define WINRT_Windows_ApplicationModel_Payments_Provider_1_H
#include "winrt/impl/Windows.ApplicationModel.Payments.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments::Provider
{
    struct __declspec(empty_bases) IPaymentAppCanMakePaymentTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentAppCanMakePaymentTriggerDetails>
    {
        IPaymentAppCanMakePaymentTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IPaymentAppCanMakePaymentTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPaymentAppManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentAppManager>
    {
        IPaymentAppManager(std::nullptr_t = nullptr) noexcept {}
        IPaymentAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPaymentAppManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentAppManagerStatics>
    {
        IPaymentAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IPaymentAppManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPaymentTransaction :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentTransaction>
    {
        IPaymentTransaction(std::nullptr_t = nullptr) noexcept {}
        IPaymentTransaction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPaymentTransactionAcceptResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentTransactionAcceptResult>
    {
        IPaymentTransactionAcceptResult(std::nullptr_t = nullptr) noexcept {}
        IPaymentTransactionAcceptResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPaymentTransactionStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentTransactionStatics>
    {
        IPaymentTransactionStatics(std::nullptr_t = nullptr) noexcept {}
        IPaymentTransactionStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
