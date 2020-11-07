#pragma once
#include <concepts/remove_const.hpp>
#include <concepts/remove_volatile.hpp>

namespace lux
{
    namespace concepts
    {
        ///Returns safely at compile-time T with volatile qualifier
        template<class T> using add_volatile = volatile remove_volatile<remove_const<T>>;
    }
}
/** @example concepts/add_volatile.cpp */