// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_Spatial_Surfaces_1_H
#define WINRT_Windows_Perception_Spatial_Surfaces_1_H
#include "winrt/impl/Windows.Perception.Spatial.Surfaces.0.h"
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Surfaces
{
    struct __declspec(empty_bases) ISpatialSurfaceInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialSurfaceInfo>
    {
        ISpatialSurfaceInfo(std::nullptr_t = nullptr) noexcept {}
        ISpatialSurfaceInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpatialSurfaceMesh :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialSurfaceMesh>
    {
        ISpatialSurfaceMesh(std::nullptr_t = nullptr) noexcept {}
        ISpatialSurfaceMesh(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpatialSurfaceMeshBuffer :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialSurfaceMeshBuffer>
    {
        ISpatialSurfaceMeshBuffer(std::nullptr_t = nullptr) noexcept {}
        ISpatialSurfaceMeshBuffer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpatialSurfaceMeshOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialSurfaceMeshOptions>
    {
        ISpatialSurfaceMeshOptions(std::nullptr_t = nullptr) noexcept {}
        ISpatialSurfaceMeshOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpatialSurfaceMeshOptionsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialSurfaceMeshOptionsStatics>
    {
        ISpatialSurfaceMeshOptionsStatics(std::nullptr_t = nullptr) noexcept {}
        ISpatialSurfaceMeshOptionsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpatialSurfaceObserver :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialSurfaceObserver>
    {
        ISpatialSurfaceObserver(std::nullptr_t = nullptr) noexcept {}
        ISpatialSurfaceObserver(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpatialSurfaceObserverStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialSurfaceObserverStatics>
    {
        ISpatialSurfaceObserverStatics(std::nullptr_t = nullptr) noexcept {}
        ISpatialSurfaceObserverStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpatialSurfaceObserverStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialSurfaceObserverStatics2>,
        impl::require<Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics>
    {
        ISpatialSurfaceObserverStatics2(std::nullptr_t = nullptr) noexcept {}
        ISpatialSurfaceObserverStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
