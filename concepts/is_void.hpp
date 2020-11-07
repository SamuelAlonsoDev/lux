#pragma once
#include <concepts/is_same.hpp>
#include <concepts/remove_const.hpp>
#include <concepts/remove_volatile.hpp>

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T without const and volatile qualifiers is the same type as void
        template<class T> concept is_void = is_same<remove_const<remove_volatile<T>>, void>;
    }
}
/** @example concepts/is_void.cpp */