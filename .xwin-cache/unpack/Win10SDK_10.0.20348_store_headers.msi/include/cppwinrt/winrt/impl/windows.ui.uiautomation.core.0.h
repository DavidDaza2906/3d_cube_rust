// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_UIAutomation_Core_0_H
#define WINRT_Windows_UI_UIAutomation_Core_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct HResult;
}
WINRT_EXPORT namespace winrt::Windows::UI::UIAutomation
{
    struct AutomationElement;
    struct AutomationTextRange;
}
WINRT_EXPORT namespace winrt::Windows::UI::UIAutomation::Core
{
    enum class AutomationRemoteOperationStatus : int32_t
    {
        Success = 0,
        MalformedBytecode = 1,
        InstructionLimitExceeded = 2,
        UnhandledException = 3,
        ExecutionFailure = 4,
    };
    struct IAutomationRemoteOperationResult;
    struct ICoreAutomationRemoteOperation;
    struct AutomationRemoteOperationResult;
    struct CoreAutomationRemoteOperation;
    struct AutomationRemoteOperationOperandId;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult>{ using type = interface_category; };
    template <> struct category<Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation>{ using type = interface_category; };
    template <> struct category<Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult>{ using type = class_category; };
    template <> struct category<Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperation>{ using type = class_category; };
    template <> struct category<Windows::UI::UIAutomation::Core::AutomationRemoteOperationStatus>{ using type = enum_category; };
    template <> struct category<Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId>{ using type = struct_category<int32_t>; };
    template <> inline constexpr auto& name_v<Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult> = L"Windows.UI.UIAutomation.Core.AutomationRemoteOperationResult";
    template <> inline constexpr auto& name_v<Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperation> = L"Windows.UI.UIAutomation.Core.CoreAutomationRemoteOperation";
    template <> inline constexpr auto& name_v<Windows::UI::UIAutomation::Core::AutomationRemoteOperationStatus> = L"Windows.UI.UIAutomation.Core.AutomationRemoteOperationStatus";
    template <> inline constexpr auto& name_v<Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId> = L"Windows.UI.UIAutomation.Core.AutomationRemoteOperationOperandId";
    template <> inline constexpr auto& name_v<Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult> = L"Windows.UI.UIAutomation.Core.IAutomationRemoteOperationResult";
    template <> inline constexpr auto& name_v<Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation> = L"Windows.UI.UIAutomation.Core.ICoreAutomationRemoteOperation";
    template <> inline constexpr guid guid_v<Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult>{ 0xE0F80C42,0x4A67,0x5534,{ 0xBF,0x5A,0x09,0xE8,0xA9,0x9B,0x36,0xB1 } }; // E0F80C42-4A67-5534-BF5A-09E8A99B36B1
    template <> inline constexpr guid guid_v<Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation>{ 0x3AC656F4,0xE2BC,0x5C6E,{ 0xB8,0xE7,0xB2,0x24,0xFB,0x74,0xB0,0x60 } }; // 3AC656F4-E2BC-5C6E-B8E7-B224FB74B060
    template <> struct default_interface<Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult>{ using type = Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult; };
    template <> struct default_interface<Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperation>{ using type = Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation; };
    template <> struct abi<Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorLocation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall HasOperand(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId, bool*) noexcept = 0;
            virtual int32_t __stdcall GetOperand(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsOpcodeSupported(uint32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall ImportElement(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId, void*) noexcept = 0;
            virtual int32_t __stdcall ImportTextRange(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId, void*) noexcept = 0;
            virtual int32_t __stdcall AddToResults(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId) noexcept = 0;
            virtual int32_t __stdcall Execute(uint32_t, uint8_t*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_IAutomationRemoteOperationResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::UIAutomation::Core::AutomationRemoteOperationStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ErrorLocation() const;
        WINRT_IMPL_AUTO(bool) HasOperand(Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetOperand(Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId) const;
    };
    template <> struct consume<Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_IAutomationRemoteOperationResult<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation
    {
        WINRT_IMPL_AUTO(bool) IsOpcodeSupported(uint32_t opcode) const;
        WINRT_IMPL_AUTO(void) ImportElement(Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId, Windows::UI::UIAutomation::AutomationElement const& element) const;
        WINRT_IMPL_AUTO(void) ImportTextRange(Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId, Windows::UI::UIAutomation::AutomationTextRange const& textRange) const;
        WINRT_IMPL_AUTO(void) AddToResults(Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId) const;
        WINRT_IMPL_AUTO(Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult) Execute(array_view<uint8_t const> bytecodeBuffer) const;
    };
    template <> struct consume<Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation<D>;
    };
    struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId
    {
        int32_t Value;
    };
    template <> struct abi<Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId>
    {
        using type = struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId;
    };
}
#endif
