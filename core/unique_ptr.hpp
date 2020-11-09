#pragma once
#include <core/exception.hpp>

namespace lux
{
    template<class T> class unique_ptr
    {
    private:
        T* ptr;
    public:
        inline constexpr unique_ptr() noexcept = default;

        /**
         * Allocates at the heap the input value
         * @exception lux::null_ptr If exception null_ptr is enabled, will throw if the allocated input fails and returns a null pointer
         * @param[in] v The value to allocate
         */
        inline constexpr unique_ptr(T v)
        #if !defined(lux_null_ptr)
        noexcept
        #endif
        : ptr(new (std::nothrow) T(v))
        {
            #if defined(lux_null_ptr)
            if(!ptr)
                throw null_ptr();
            #endif
        }

        /**
         * Deallocates the heap-allocated input
        */
        inline ~unique_ptr() noexcept
        {
            delete ptr;
        }
    };
}
/** @example core/unique_ptr.cpp */