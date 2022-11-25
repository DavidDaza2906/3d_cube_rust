// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_AtomPub_H
#define WINRT_Windows_Web_AtomPub_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200609.3"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Web.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Web.Syndication.2.h"
#include "winrt/impl/Windows.Web.AtomPub.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::AtomPub::ServiceDocument, Windows::Web::Syndication::RetrievalProgress>) consume_Windows_Web_AtomPub_IAtomPubClient<D>::RetrieveServiceDocumentAsync(Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IAtomPubClient)->RetrieveServiceDocumentAsync(*(void**)(&uri), &operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::AtomPub::ServiceDocument, Windows::Web::Syndication::RetrievalProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Syndication::RetrievalProgress>) consume_Windows_Web_AtomPub_IAtomPubClient<D>::RetrieveMediaResourceAsync(Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IAtomPubClient)->RetrieveMediaResourceAsync(*(void**)(&uri), &operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Syndication::RetrievalProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::RetrievalProgress>) consume_Windows_Web_AtomPub_IAtomPubClient<D>::RetrieveResourceAsync(Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IAtomPubClient)->RetrieveResourceAsync(*(void**)(&uri), &operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::RetrievalProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress>) consume_Windows_Web_AtomPub_IAtomPubClient<D>::CreateResourceAsync(Windows::Foundation::Uri const& uri, param::hstring const& description, Windows::Web::Syndication::SyndicationItem const& item) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IAtomPubClient)->CreateResourceAsync(*(void**)(&uri), *(void**)(&description), *(void**)(&item), &operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress>) consume_Windows_Web_AtomPub_IAtomPubClient<D>::CreateMediaResourceAsync(Windows::Foundation::Uri const& uri, param::hstring const& mediaType, param::hstring const& description, Windows::Storage::Streams::IInputStream const& mediaStream) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IAtomPubClient)->CreateMediaResourceAsync(*(void**)(&uri), *(void**)(&mediaType), *(void**)(&description), *(void**)(&mediaStream), &operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>) consume_Windows_Web_AtomPub_IAtomPubClient<D>::UpdateMediaResourceAsync(Windows::Foundation::Uri const& uri, param::hstring const& mediaType, Windows::Storage::Streams::IInputStream const& mediaStream) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IAtomPubClient)->UpdateMediaResourceAsync(*(void**)(&uri), *(void**)(&mediaType), *(void**)(&mediaStream), &operation));
        return Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>) consume_Windows_Web_AtomPub_IAtomPubClient<D>::UpdateResourceAsync(Windows::Foundation::Uri const& uri, Windows::Web::Syndication::SyndicationItem const& item) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IAtomPubClient)->UpdateResourceAsync(*(void**)(&uri), *(void**)(&item), &operation));
        return Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>) consume_Windows_Web_AtomPub_IAtomPubClient<D>::UpdateResourceItemAsync(Windows::Web::Syndication::SyndicationItem const& item) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IAtomPubClient)->UpdateResourceItemAsync(*(void**)(&item), &operation));
        return Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>) consume_Windows_Web_AtomPub_IAtomPubClient<D>::DeleteResourceAsync(Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IAtomPubClient)->DeleteResourceAsync(*(void**)(&uri), &operation));
        return Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>) consume_Windows_Web_AtomPub_IAtomPubClient<D>::DeleteResourceItemAsync(Windows::Web::Syndication::SyndicationItem const& item) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IAtomPubClient)->DeleteResourceItemAsync(*(void**)(&item), &operation));
        return Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Web_AtomPub_IAtomPubClient<D>::CancelAsyncOperations() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IAtomPubClient)->CancelAsyncOperations());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Web::AtomPub::AtomPubClient) consume_Windows_Web_AtomPub_IAtomPubClientFactory<D>::CreateAtomPubClientWithCredentials(Windows::Security::Credentials::PasswordCredential const& serverCredential) const
    {
        void* atomPubClient{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IAtomPubClientFactory)->CreateAtomPubClientWithCredentials(*(void**)(&serverCredential), &atomPubClient));
        return Windows::Web::AtomPub::AtomPubClient{ atomPubClient, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Web::Syndication::ISyndicationText) consume_Windows_Web_AtomPub_IResourceCollection<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IResourceCollection)->get_Title(&value));
        return Windows::Web::Syndication::ISyndicationText{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_Web_AtomPub_IResourceCollection<D>::Uri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IResourceCollection)->get_Uri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Web::Syndication::SyndicationCategory>) consume_Windows_Web_AtomPub_IResourceCollection<D>::Categories() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IResourceCollection)->get_Categories(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Web::Syndication::SyndicationCategory>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) consume_Windows_Web_AtomPub_IResourceCollection<D>::Accepts() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IResourceCollection)->get_Accepts(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::Workspace>) consume_Windows_Web_AtomPub_IServiceDocument<D>::Workspaces() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IServiceDocument)->get_Workspaces(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::Workspace>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Web::Syndication::ISyndicationText) consume_Windows_Web_AtomPub_IWorkspace<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IWorkspace)->get_Title(&value));
        return Windows::Web::Syndication::ISyndicationText{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::ResourceCollection>) consume_Windows_Web_AtomPub_IWorkspace<D>::Collections() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Web::AtomPub::IWorkspace)->get_Collections(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::ResourceCollection>{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Web::AtomPub::IAtomPubClient> : produce_base<D, Windows::Web::AtomPub::IAtomPubClient>
    {
        int32_t __stdcall RetrieveServiceDocumentAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::AtomPub::ServiceDocument, Windows::Web::Syndication::RetrievalProgress>>(this->shim().RetrieveServiceDocumentAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RetrieveMediaResourceAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Syndication::RetrievalProgress>>(this->shim().RetrieveMediaResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RetrieveResourceAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::RetrievalProgress>>(this->shim().RetrieveResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateResourceAsync(void* uri, void* description, void* item, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress>>(this->shim().CreateResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<hstring const*>(&description), *reinterpret_cast<Windows::Web::Syndication::SyndicationItem const*>(&item)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateMediaResourceAsync(void* uri, void* mediaType, void* description, void* mediaStream, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress>>(this->shim().CreateMediaResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<hstring const*>(&mediaType), *reinterpret_cast<hstring const*>(&description), *reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&mediaStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateMediaResourceAsync(void* uri, void* mediaType, void* mediaStream, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>>(this->shim().UpdateMediaResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<hstring const*>(&mediaType), *reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&mediaStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateResourceAsync(void* uri, void* item, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>>(this->shim().UpdateResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Web::Syndication::SyndicationItem const*>(&item)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateResourceItemAsync(void* item, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>>(this->shim().UpdateResourceItemAsync(*reinterpret_cast<Windows::Web::Syndication::SyndicationItem const*>(&item)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteResourceAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>>(this->shim().DeleteResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteResourceItemAsync(void* item, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>>(this->shim().DeleteResourceItemAsync(*reinterpret_cast<Windows::Web::Syndication::SyndicationItem const*>(&item)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CancelAsyncOperations() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CancelAsyncOperations();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Web::AtomPub::IAtomPubClientFactory> : produce_base<D, Windows::Web::AtomPub::IAtomPubClientFactory>
    {
        int32_t __stdcall CreateAtomPubClientWithCredentials(void* serverCredential, void** atomPubClient) noexcept final try
        {
            clear_abi(atomPubClient);
            typename D::abi_guard guard(this->shim());
            *atomPubClient = detach_from<Windows::Web::AtomPub::AtomPubClient>(this->shim().CreateAtomPubClientWithCredentials(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&serverCredential)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Web::AtomPub::IResourceCollection> : produce_base<D, Windows::Web::AtomPub::IResourceCollection>
    {
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Syndication::ISyndicationText>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Categories(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Web::Syndication::SyndicationCategory>>(this->shim().Categories());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Accepts(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().Accepts());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Web::AtomPub::IServiceDocument> : produce_base<D, Windows::Web::AtomPub::IServiceDocument>
    {
        int32_t __stdcall get_Workspaces(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::Workspace>>(this->shim().Workspaces());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Web::AtomPub::IWorkspace> : produce_base<D, Windows::Web::AtomPub::IWorkspace>
    {
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Syndication::ISyndicationText>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Collections(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::ResourceCollection>>(this->shim().Collections());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Web::AtomPub
{
    inline AtomPubClient::AtomPubClient() :
        AtomPubClient(impl::call_factory_cast<AtomPubClient(*)(Windows::Foundation::IActivationFactory const&), AtomPubClient>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<AtomPubClient>(); }))
    {
    }
    inline AtomPubClient::AtomPubClient(Windows::Security::Credentials::PasswordCredential const& serverCredential) :
        AtomPubClient(impl::call_factory<AtomPubClient, IAtomPubClientFactory>([&](IAtomPubClientFactory const& f) { return f.CreateAtomPubClientWithCredentials(serverCredential); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Web::AtomPub::IAtomPubClient> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::AtomPub::IAtomPubClientFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::AtomPub::IResourceCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::AtomPub::IServiceDocument> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::AtomPub::IWorkspace> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::AtomPub::AtomPubClient> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::AtomPub::ResourceCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::AtomPub::ServiceDocument> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::AtomPub::Workspace> : winrt::impl::hash_base {};
#endif
}
#endif
