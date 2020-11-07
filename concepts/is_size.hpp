#pragma once
#include <core/types.hpp>

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if Size is equal to the size of T
        template<class T, const u64 Size> concept is_size = sizeof(T) == Size; 
    }
}
/** @example concepts/is_size.cpp */