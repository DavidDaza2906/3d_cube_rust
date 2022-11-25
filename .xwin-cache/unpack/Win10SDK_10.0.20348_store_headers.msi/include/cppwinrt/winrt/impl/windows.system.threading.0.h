// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Threading_0_H
#define WINRT_Windows_System_Threading_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
WINRT_EXPORT namespace winrt::Windows::System::Threading
{
    enum class WorkItemOptions : uint32_t
    {
        None = 0,
        TimeSliced = 0x1,
    };
    enum class WorkItemPriority : int32_t
    {
        Low = -1,
        Normal = 0,
        High = 1,
    };
    struct IThreadPoolStatics;
    struct IThreadPoolTimer;
    struct IThreadPoolTimerStatics;
    struct ThreadPool;
    struct ThreadPoolTimer;
    struct TimerDestroyedHandler;
    struct TimerElapsedHandler;
    struct WorkItemHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::Threading::IThreadPoolStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::Threading::IThreadPoolTimer>{ using type = interface_category; };
    template <> struct category<Windows::System::Threading::IThreadPoolTimerStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::Threading::ThreadPool>{ using type = class_category; };
    template <> struct category<Windows::System::Threading::ThreadPoolTimer>{ using type = class_category; };
    template <> struct category<Windows::System::Threading::WorkItemOptions>{ using type = enum_category; };
    template <> struct category<Windows::System::Threading::WorkItemPriority>{ using type = enum_category; };
    template <> struct category<Windows::System::Threading::TimerDestroyedHandler>{ using type = delegate_category; };
    template <> struct category<Windows::System::Threading::TimerElapsedHandler>{ using type = delegate_category; };
    template <> struct category<Windows::System::Threading::WorkItemHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::System::Threading::ThreadPool> = L"Windows.System.Threading.ThreadPool";
    template <> inline constexpr auto& name_v<Windows::System::Threading::ThreadPoolTimer> = L"Windows.System.Threading.ThreadPoolTimer";
    template <> inline constexpr auto& name_v<Windows::System::Threading::WorkItemOptions> = L"Windows.System.Threading.WorkItemOptions";
    template <> inline constexpr auto& name_v<Windows::System::Threading::WorkItemPriority> = L"Windows.System.Threading.WorkItemPriority";
    template <> inline constexpr auto& name_v<Windows::System::Threading::IThreadPoolStatics> = L"Windows.System.Threading.IThreadPoolStatics";
    template <> inline constexpr auto& name_v<Windows::System::Threading::IThreadPoolTimer> = L"Windows.System.Threading.IThreadPoolTimer";
    template <> inline constexpr auto& name_v<Windows::System::Threading::IThreadPoolTimerStatics> = L"Windows.System.Threading.IThreadPoolTimerStatics";
    template <> inline constexpr auto& name_v<Windows::System::Threading::TimerDestroyedHandler> = L"Windows.System.Threading.TimerDestroyedHandler";
    template <> inline constexpr auto& name_v<Windows::System::Threading::TimerElapsedHandler> = L"Windows.System.Threading.TimerElapsedHandler";
    template <> inline constexpr auto& name_v<Windows::System::Threading::WorkItemHandler> = L"Windows.System.Threading.WorkItemHandler";
    template <> inline constexpr guid guid_v<Windows::System::Threading::IThreadPoolStatics>{ 0xB6BF67DD,0x84BD,0x44F8,{ 0xAC,0x1C,0x93,0xEB,0xCB,0x9D,0xBA,0x91 } }; // B6BF67DD-84BD-44F8-AC1C-93EBCB9DBA91
    template <> inline constexpr guid guid_v<Windows::System::Threading::IThreadPoolTimer>{ 0x594EBE78,0x55EA,0x4A88,{ 0xA5,0x0D,0x34,0x02,0xAE,0x1F,0x9C,0xF2 } }; // 594EBE78-55EA-4A88-A50D-3402AE1F9CF2
    template <> inline constexpr guid guid_v<Windows::System::Threading::IThreadPoolTimerStatics>{ 0x1A8A9D02,0xE482,0x461B,{ 0xB8,0xC7,0x8E,0xFA,0xD1,0xCC,0xE5,0x90 } }; // 1A8A9D02-E482-461B-B8C7-8EFAD1CCE590
    template <> inline constexpr guid guid_v<Windows::System::Threading::TimerDestroyedHandler>{ 0x34ED19FA,0x8384,0x4EB9,{ 0x82,0x09,0xFB,0x50,0x94,0xEE,0xEC,0x35 } }; // 34ED19FA-8384-4EB9-8209-FB5094EEEC35
    template <> inline constexpr guid guid_v<Windows::System::Threading::TimerElapsedHandler>{ 0xFAAEA667,0xFBEB,0x49CB,{ 0xAD,0xB2,0x71,0x18,0x4C,0x55,0x6E,0x43 } }; // FAAEA667-FBEB-49CB-ADB2-71184C556E43
    template <> inline constexpr guid guid_v<Windows::System::Threading::WorkItemHandler>{ 0x1D1A8B8B,0xFA66,0x414F,{ 0x9C,0xBD,0xB6,0x5F,0xC9,0x9D,0x17,0xFA } }; // 1D1A8B8B-FA66-414F-9CBD-B65FC99D17FA
    template <> struct default_interface<Windows::System::Threading::ThreadPoolTimer>{ using type = Windows::System::Threading::IThreadPoolTimer; };
    template <> struct abi<Windows::System::Threading::IThreadPoolStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RunAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RunWithPriorityAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RunWithPriorityAndOptionsAsync(void*, int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Threading::IThreadPoolTimer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Period(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Delay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall Cancel() noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Threading::IThreadPoolTimerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreatePeriodicTimer(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateTimer(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreatePeriodicTimerWithCompletion(void*, int64_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateTimerWithCompletion(void*, int64_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Threading::TimerDestroyedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Threading::TimerElapsedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Threading::WorkItemHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Threading_IThreadPoolStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) RunAsync(Windows::System::Threading::WorkItemHandler const& handler) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) RunAsync(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) RunAsync(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options) const;
    };
    template <> struct consume<Windows::System::Threading::IThreadPoolStatics>
    {
        template <typename D> using type = consume_Windows_System_Threading_IThreadPoolStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Threading_IThreadPoolTimer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Period() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Delay() const;
        WINRT_IMPL_AUTO(void) Cancel() const;
    };
    template <> struct consume<Windows::System::Threading::IThreadPoolTimer>
    {
        template <typename D> using type = consume_Windows_System_Threading_IThreadPoolTimer<D>;
    };
    template <typename D>
    struct consume_Windows_System_Threading_IThreadPoolTimerStatics
    {
        WINRT_IMPL_AUTO(Windows::System::Threading::ThreadPoolTimer) CreatePeriodicTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& period) const;
        WINRT_IMPL_AUTO(Windows::System::Threading::ThreadPoolTimer) CreateTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& delay) const;
        WINRT_IMPL_AUTO(Windows::System::Threading::ThreadPoolTimer) CreatePeriodicTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& period, Windows::System::Threading::TimerDestroyedHandler const& destroyed) const;
        WINRT_IMPL_AUTO(Windows::System::Threading::ThreadPoolTimer) CreateTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& delay, Windows::System::Threading::TimerDestroyedHandler const& destroyed) const;
    };
    template <> struct consume<Windows::System::Threading::IThreadPoolTimerStatics>
    {
        template <typename D> using type = consume_Windows_System_Threading_IThreadPoolTimerStatics<D>;
    };
}
#endif
