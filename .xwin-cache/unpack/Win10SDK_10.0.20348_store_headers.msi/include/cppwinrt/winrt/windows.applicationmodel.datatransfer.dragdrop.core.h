// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_Core_H
#define WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200609.3"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.ApplicationModel.DataTransfer.DragDrop.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.DragDrop.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.DragDrop.Core.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>::TargetRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> const& value) const
    {
        winrt::event_token returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager)->add_TargetRequested(*(void**)(&value), put_abi(returnValue)));
        return returnValue;
    }
    template <typename D> typename consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>::TargetRequested_revoker consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>::TargetRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> const& value) const
    {
        return impl::make_event_revoker<D, TargetRequested_revoker>(this, TargetRequested(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>::TargetRequested(winrt::event_token const& value) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager)->remove_TargetRequested(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>::AreConcurrentOperationsEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager)->get_AreConcurrentOperationsEnabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>::AreConcurrentOperationsEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager)->put_AreConcurrentOperationsEnabled(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManagerStatics<D>::GetForCurrentView() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics)->GetForCurrentView(&value));
        return Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DataPackageView) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo<D>::Data() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo)->get_Data(&value));
        return Windows::ApplicationModel::DataTransfer::DataPackageView{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo<D>::Modifiers() const
    {
        Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo)->get_Modifiers(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Point) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo<D>::Position() const
    {
        Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DataPackageOperation) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo2<D>::AllowedOperations() const
    {
        Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2)->get_AllowedOperations(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DataPackage) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::Data() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->get_Data(&value));
        return Windows::ApplicationModel::DataTransfer::DataPackage{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::SetPointerId(uint32_t pointerId) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->SetPointerId(pointerId));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::SetDragUIContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->SetDragUIContentFromSoftwareBitmap(*(void**)(&softwareBitmap)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::SetDragUIContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->SetDragUIContentFromSoftwareBitmapWithAnchorPoint(*(void**)(&softwareBitmap), impl::bind_in(anchorPoint)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::DragUIContentMode() const
    {
        Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->get_DragUIContentMode(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::DragUIContentMode(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->put_DragUIContentMode(static_cast<uint32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::StartAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->StartAsync(&value));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DataPackageOperation) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2<D>::AllowedOperations() const
    {
        Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2)->get_AllowedOperations(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2<D>::AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2)->put_AllowedOperations(static_cast<uint32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->SetContentFromSoftwareBitmap(*(void**)(&softwareBitmap)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->SetContentFromSoftwareBitmapWithAnchorPoint(*(void**)(&softwareBitmap), impl::bind_in(anchorPoint)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::IsContentVisible() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->get_IsContentVisible(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::IsContentVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->put_IsContentVisible(value));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::Caption() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->get_Caption(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::Caption(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->put_Caption(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::IsCaptionVisible() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->get_IsCaptionVisible(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::IsCaptionVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->put_IsCaptionVisible(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::IsGlyphVisible() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->get_IsGlyphVisible(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::IsGlyphVisible(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->put_IsGlyphVisible(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::Clear() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->Clear());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget<D>::EnterAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const& dragUIOverride) const
    {
        void* returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget)->EnterAsync(*(void**)(&dragInfo), *(void**)(&dragUIOverride), &returnValue));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>{ returnValue, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget<D>::OverAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const& dragUIOverride) const
    {
        void* returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget)->OverAsync(*(void**)(&dragInfo), *(void**)(&dragUIOverride), &returnValue));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>{ returnValue, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget<D>::LeaveAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo) const
    {
        void* returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget)->LeaveAsync(*(void**)(&dragInfo), &returnValue));
        return Windows::Foundation::IAsyncAction{ returnValue, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget<D>::DropAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo) const
    {
        void* returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget)->DropAsync(*(void**)(&dragInfo), &returnValue));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>{ returnValue, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTargetRequestedEventArgs<D>::SetTarget(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget const& target) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs)->SetTarget(*(void**)(&target)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>
    {
        int32_t __stdcall add_TargetRequested(void* value, winrt::event_token* returnValue) noexcept final try
        {
            zero_abi<winrt::event_token>(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<winrt::event_token>(this->shim().TargetRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TargetRequested(winrt::event_token value) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetRequested(*reinterpret_cast<winrt::event_token const*>(&value));
            return 0;
        }
        int32_t __stdcall get_AreConcurrentOperationsEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreConcurrentOperationsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AreConcurrentOperationsEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AreConcurrentOperationsEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>
    {
        int32_t __stdcall GetForCurrentView(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>(this->shim().GetForCurrentView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
    {
        int32_t __stdcall get_Data(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageView>(this->shim().Data());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Modifiers(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers>(this->shim().Modifiers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Position(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>
    {
        int32_t __stdcall get_AllowedOperations(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageOperation>(this->shim().AllowedOperations());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
    {
        int32_t __stdcall get_Data(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackage>(this->shim().Data());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPointerId(uint32_t pointerId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPointerId(pointerId);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDragUIContentFromSoftwareBitmap(void* softwareBitmap) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDragUIContentFromSoftwareBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&softwareBitmap));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDragUIContentFromSoftwareBitmapWithAnchorPoint(void* softwareBitmap, Windows::Foundation::Point anchorPoint) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDragUIContentFromSoftwareBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&softwareBitmap), *reinterpret_cast<Windows::Foundation::Point const*>(&anchorPoint));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DragUIContentMode(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode>(this->shim().DragUIContentMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DragUIContentMode(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragUIContentMode(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().StartAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>
    {
        int32_t __stdcall get_AllowedOperations(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageOperation>(this->shim().AllowedOperations());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowedOperations(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowedOperations(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackageOperation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>
    {
        int32_t __stdcall SetContentFromSoftwareBitmap(void* softwareBitmap) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContentFromSoftwareBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&softwareBitmap));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetContentFromSoftwareBitmapWithAnchorPoint(void* softwareBitmap, Windows::Foundation::Point anchorPoint) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContentFromSoftwareBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&softwareBitmap), *reinterpret_cast<Windows::Foundation::Point const*>(&anchorPoint));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsContentVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsContentVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsContentVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsContentVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Caption(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Caption());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Caption(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Caption(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsCaptionVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCaptionVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsCaptionVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCaptionVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsGlyphVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsGlyphVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsGlyphVisible(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsGlyphVisible(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Clear() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>
    {
        int32_t __stdcall EnterAsync(void* dragInfo, void* dragUIOverride, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().EnterAsync(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const*>(&dragInfo), *reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const*>(&dragUIOverride)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OverAsync(void* dragInfo, void* dragUIOverride, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().OverAsync(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const*>(&dragInfo), *reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const*>(&dragUIOverride)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LeaveAsync(void* dragInfo, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncAction>(this->shim().LeaveAsync(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const*>(&dragInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DropAsync(void* dragInfo, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().DropAsync(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const*>(&dragInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>
    {
        int32_t __stdcall SetTarget(void* target) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTarget(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget const*>(&target));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core
{
    constexpr auto operator|(CoreDragUIContentMode const left, CoreDragUIContentMode const right) noexcept
    {
        return static_cast<CoreDragUIContentMode>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(CoreDragUIContentMode& left, CoreDragUIContentMode const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(CoreDragUIContentMode const left, CoreDragUIContentMode const right) noexcept
    {
        return static_cast<CoreDragUIContentMode>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(CoreDragUIContentMode& left, CoreDragUIContentMode const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(CoreDragUIContentMode const value) noexcept
    {
        return static_cast<CoreDragUIContentMode>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(CoreDragUIContentMode const left, CoreDragUIContentMode const right) noexcept
    {
        return static_cast<CoreDragUIContentMode>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(CoreDragUIContentMode& left, CoreDragUIContentMode const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto CoreDragDropManager::GetForCurrentView()
    {
        return impl::call_factory_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager(*)(ICoreDragDropManagerStatics const&), CoreDragDropManager, ICoreDragDropManagerStatics>([](ICoreDragDropManagerStatics const& f) { return f.GetForCurrentView(); });
    }
    inline CoreDragOperation::CoreDragOperation() :
        CoreDragOperation(impl::call_factory_cast<CoreDragOperation(*)(Windows::Foundation::IActivationFactory const&), CoreDragOperation>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<CoreDragOperation>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> : winrt::impl::hash_base {};
#endif
}
#endif
