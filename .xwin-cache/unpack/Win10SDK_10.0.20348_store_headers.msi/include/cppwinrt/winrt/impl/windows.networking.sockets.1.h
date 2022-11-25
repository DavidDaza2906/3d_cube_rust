// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_Sockets_1_H
#define WINRT_Windows_Networking_Sockets_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Networking.Sockets.0.h"
WINRT_EXPORT namespace winrt::Windows::Networking::Sockets
{
    struct __declspec(empty_bases) IControlChannelTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IControlChannelTrigger>,
        impl::require<Windows::Networking::Sockets::IControlChannelTrigger, Windows::Foundation::IClosable>
    {
        IControlChannelTrigger(std::nullptr_t = nullptr) noexcept {}
        IControlChannelTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IControlChannelTrigger2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IControlChannelTrigger2>
    {
        IControlChannelTrigger2(std::nullptr_t = nullptr) noexcept {}
        IControlChannelTrigger2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IControlChannelTriggerEventDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IControlChannelTriggerEventDetails>
    {
        IControlChannelTriggerEventDetails(std::nullptr_t = nullptr) noexcept {}
        IControlChannelTriggerEventDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IControlChannelTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IControlChannelTriggerFactory>
    {
        IControlChannelTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IControlChannelTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IControlChannelTriggerResetEventDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IControlChannelTriggerResetEventDetails>
    {
        IControlChannelTriggerResetEventDetails(std::nullptr_t = nullptr) noexcept {}
        IControlChannelTriggerResetEventDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDatagramSocket :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDatagramSocket>,
        impl::require<Windows::Networking::Sockets::IDatagramSocket, Windows::Foundation::IClosable>
    {
        IDatagramSocket(std::nullptr_t = nullptr) noexcept {}
        IDatagramSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDatagramSocket2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDatagramSocket2>,
        impl::require<Windows::Networking::Sockets::IDatagramSocket2, Windows::Foundation::IClosable>
    {
        IDatagramSocket2(std::nullptr_t = nullptr) noexcept {}
        IDatagramSocket2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDatagramSocket3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDatagramSocket3>
    {
        IDatagramSocket3(std::nullptr_t = nullptr) noexcept {}
        IDatagramSocket3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDatagramSocketControl :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDatagramSocketControl>
    {
        IDatagramSocketControl(std::nullptr_t = nullptr) noexcept {}
        IDatagramSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDatagramSocketControl2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDatagramSocketControl2>
    {
        IDatagramSocketControl2(std::nullptr_t = nullptr) noexcept {}
        IDatagramSocketControl2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDatagramSocketControl3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDatagramSocketControl3>
    {
        IDatagramSocketControl3(std::nullptr_t = nullptr) noexcept {}
        IDatagramSocketControl3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDatagramSocketInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDatagramSocketInformation>
    {
        IDatagramSocketInformation(std::nullptr_t = nullptr) noexcept {}
        IDatagramSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDatagramSocketMessageReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDatagramSocketMessageReceivedEventArgs>
    {
        IDatagramSocketMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDatagramSocketMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDatagramSocketStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDatagramSocketStatics>
    {
        IDatagramSocketStatics(std::nullptr_t = nullptr) noexcept {}
        IDatagramSocketStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMessageWebSocket :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMessageWebSocket>,
        impl::require<Windows::Networking::Sockets::IMessageWebSocket, Windows::Foundation::IClosable, Windows::Networking::Sockets::IWebSocket>
    {
        IMessageWebSocket(std::nullptr_t = nullptr) noexcept {}
        IMessageWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IMessageWebSocket, Windows::Foundation::IClosable>::Close;
        using impl::consume_t<IMessageWebSocket, Windows::Networking::Sockets::IWebSocket>::Close;
    };
    struct __declspec(empty_bases) IMessageWebSocket2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMessageWebSocket2>,
        impl::require<Windows::Networking::Sockets::IMessageWebSocket2, Windows::Foundation::IClosable, Windows::Networking::Sockets::IWebSocket, Windows::Networking::Sockets::IMessageWebSocket>
    {
        IMessageWebSocket2(std::nullptr_t = nullptr) noexcept {}
        IMessageWebSocket2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IMessageWebSocket2, Windows::Foundation::IClosable>::Close;
        using impl::consume_t<IMessageWebSocket2, Windows::Networking::Sockets::IWebSocket>::Close;
    };
    struct __declspec(empty_bases) IMessageWebSocket3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMessageWebSocket3>
    {
        IMessageWebSocket3(std::nullptr_t = nullptr) noexcept {}
        IMessageWebSocket3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMessageWebSocketControl :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMessageWebSocketControl>,
        impl::require<Windows::Networking::Sockets::IMessageWebSocketControl, Windows::Networking::Sockets::IWebSocketControl>
    {
        IMessageWebSocketControl(std::nullptr_t = nullptr) noexcept {}
        IMessageWebSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMessageWebSocketControl2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMessageWebSocketControl2>
    {
        IMessageWebSocketControl2(std::nullptr_t = nullptr) noexcept {}
        IMessageWebSocketControl2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMessageWebSocketMessageReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMessageWebSocketMessageReceivedEventArgs>
    {
        IMessageWebSocketMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMessageWebSocketMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMessageWebSocketMessageReceivedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMessageWebSocketMessageReceivedEventArgs2>,
        impl::require<Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2, Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs>
    {
        IMessageWebSocketMessageReceivedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IMessageWebSocketMessageReceivedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IServerMessageWebSocket :
        Windows::Foundation::IInspectable,
        impl::consume_t<IServerMessageWebSocket>,
        impl::require<Windows::Networking::Sockets::IServerMessageWebSocket, Windows::Foundation::IClosable>
    {
        IServerMessageWebSocket(std::nullptr_t = nullptr) noexcept {}
        IServerMessageWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IServerMessageWebSocket, IServerMessageWebSocket>::Close;
        using impl::consume_t<IServerMessageWebSocket, Windows::Foundation::IClosable>::Close;
    };
    struct __declspec(empty_bases) IServerMessageWebSocketControl :
        Windows::Foundation::IInspectable,
        impl::consume_t<IServerMessageWebSocketControl>
    {
        IServerMessageWebSocketControl(std::nullptr_t = nullptr) noexcept {}
        IServerMessageWebSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IServerMessageWebSocketInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IServerMessageWebSocketInformation>
    {
        IServerMessageWebSocketInformation(std::nullptr_t = nullptr) noexcept {}
        IServerMessageWebSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IServerStreamWebSocket :
        Windows::Foundation::IInspectable,
        impl::consume_t<IServerStreamWebSocket>,
        impl::require<Windows::Networking::Sockets::IServerStreamWebSocket, Windows::Foundation::IClosable>
    {
        IServerStreamWebSocket(std::nullptr_t = nullptr) noexcept {}
        IServerStreamWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IServerStreamWebSocket, IServerStreamWebSocket>::Close;
        using impl::consume_t<IServerStreamWebSocket, Windows::Foundation::IClosable>::Close;
    };
    struct __declspec(empty_bases) IServerStreamWebSocketInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IServerStreamWebSocketInformation>
    {
        IServerStreamWebSocketInformation(std::nullptr_t = nullptr) noexcept {}
        IServerStreamWebSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISocketActivityContext :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISocketActivityContext>
    {
        ISocketActivityContext(std::nullptr_t = nullptr) noexcept {}
        ISocketActivityContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISocketActivityContextFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISocketActivityContextFactory>
    {
        ISocketActivityContextFactory(std::nullptr_t = nullptr) noexcept {}
        ISocketActivityContextFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISocketActivityInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISocketActivityInformation>
    {
        ISocketActivityInformation(std::nullptr_t = nullptr) noexcept {}
        ISocketActivityInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISocketActivityInformationStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISocketActivityInformationStatics>
    {
        ISocketActivityInformationStatics(std::nullptr_t = nullptr) noexcept {}
        ISocketActivityInformationStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISocketActivityTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISocketActivityTriggerDetails>
    {
        ISocketActivityTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        ISocketActivityTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISocketErrorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISocketErrorStatics>
    {
        ISocketErrorStatics(std::nullptr_t = nullptr) noexcept {}
        ISocketErrorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocket :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocket>,
        impl::require<Windows::Networking::Sockets::IStreamSocket, Windows::Foundation::IClosable>
    {
        IStreamSocket(std::nullptr_t = nullptr) noexcept {}
        IStreamSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocket2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocket2>,
        impl::require<Windows::Networking::Sockets::IStreamSocket2, Windows::Foundation::IClosable>
    {
        IStreamSocket2(std::nullptr_t = nullptr) noexcept {}
        IStreamSocket2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocket3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocket3>
    {
        IStreamSocket3(std::nullptr_t = nullptr) noexcept {}
        IStreamSocket3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketControl :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketControl>
    {
        IStreamSocketControl(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketControl2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketControl2>
    {
        IStreamSocketControl2(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketControl2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketControl3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketControl3>
    {
        IStreamSocketControl3(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketControl3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketControl4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketControl4>
    {
        IStreamSocketControl4(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketControl4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketInformation>
    {
        IStreamSocketInformation(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketInformation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketInformation2>
    {
        IStreamSocketInformation2(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketInformation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketListener :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketListener>,
        impl::require<Windows::Networking::Sockets::IStreamSocketListener, Windows::Foundation::IClosable>
    {
        IStreamSocketListener(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketListener(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketListener2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketListener2>,
        impl::require<Windows::Networking::Sockets::IStreamSocketListener2, Windows::Foundation::IClosable>
    {
        IStreamSocketListener2(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketListener2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketListener3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketListener3>
    {
        IStreamSocketListener3(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketListener3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketListenerConnectionReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketListenerConnectionReceivedEventArgs>
    {
        IStreamSocketListenerConnectionReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketListenerConnectionReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketListenerControl :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketListenerControl>
    {
        IStreamSocketListenerControl(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketListenerControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketListenerControl2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketListenerControl2>
    {
        IStreamSocketListenerControl2(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketListenerControl2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketListenerInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketListenerInformation>
    {
        IStreamSocketListenerInformation(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketListenerInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamSocketStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamSocketStatics>
    {
        IStreamSocketStatics(std::nullptr_t = nullptr) noexcept {}
        IStreamSocketStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamWebSocket :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamWebSocket>,
        impl::require<Windows::Networking::Sockets::IStreamWebSocket, Windows::Foundation::IClosable, Windows::Networking::Sockets::IWebSocket>
    {
        IStreamWebSocket(std::nullptr_t = nullptr) noexcept {}
        IStreamWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IStreamWebSocket, Windows::Foundation::IClosable>::Close;
        using impl::consume_t<IStreamWebSocket, Windows::Networking::Sockets::IWebSocket>::Close;
    };
    struct __declspec(empty_bases) IStreamWebSocket2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamWebSocket2>,
        impl::require<Windows::Networking::Sockets::IStreamWebSocket2, Windows::Foundation::IClosable, Windows::Networking::Sockets::IWebSocket, Windows::Networking::Sockets::IStreamWebSocket>
    {
        IStreamWebSocket2(std::nullptr_t = nullptr) noexcept {}
        IStreamWebSocket2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IStreamWebSocket2, Windows::Foundation::IClosable>::Close;
        using impl::consume_t<IStreamWebSocket2, Windows::Networking::Sockets::IWebSocket>::Close;
    };
    struct __declspec(empty_bases) IStreamWebSocketControl :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamWebSocketControl>,
        impl::require<Windows::Networking::Sockets::IStreamWebSocketControl, Windows::Networking::Sockets::IWebSocketControl>
    {
        IStreamWebSocketControl(std::nullptr_t = nullptr) noexcept {}
        IStreamWebSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStreamWebSocketControl2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStreamWebSocketControl2>
    {
        IStreamWebSocketControl2(std::nullptr_t = nullptr) noexcept {}
        IStreamWebSocketControl2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebSocket :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebSocket>,
        impl::require<Windows::Networking::Sockets::IWebSocket, Windows::Foundation::IClosable>
    {
        IWebSocket(std::nullptr_t = nullptr) noexcept {}
        IWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IWebSocket, IWebSocket>::Close;
        using impl::consume_t<IWebSocket, Windows::Foundation::IClosable>::Close;
    };
    struct __declspec(empty_bases) IWebSocketClosedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebSocketClosedEventArgs>
    {
        IWebSocketClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWebSocketClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebSocketControl :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebSocketControl>
    {
        IWebSocketControl(std::nullptr_t = nullptr) noexcept {}
        IWebSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebSocketControl2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebSocketControl2>,
        impl::require<Windows::Networking::Sockets::IWebSocketControl2, Windows::Networking::Sockets::IWebSocketControl>
    {
        IWebSocketControl2(std::nullptr_t = nullptr) noexcept {}
        IWebSocketControl2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebSocketErrorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebSocketErrorStatics>
    {
        IWebSocketErrorStatics(std::nullptr_t = nullptr) noexcept {}
        IWebSocketErrorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebSocketInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebSocketInformation>
    {
        IWebSocketInformation(std::nullptr_t = nullptr) noexcept {}
        IWebSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebSocketInformation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebSocketInformation2>,
        impl::require<Windows::Networking::Sockets::IWebSocketInformation2, Windows::Networking::Sockets::IWebSocketInformation>
    {
        IWebSocketInformation2(std::nullptr_t = nullptr) noexcept {}
        IWebSocketInformation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebSocketServerCustomValidationRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebSocketServerCustomValidationRequestedEventArgs>
    {
        IWebSocketServerCustomValidationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWebSocketServerCustomValidationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
