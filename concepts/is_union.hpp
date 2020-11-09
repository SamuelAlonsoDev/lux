#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T is a union type
        template<class T> concept is_union = __is_union(T);
    }
}
/** @example concepts/is_union.cpp */