#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T type has an indirection '*t' operator overloading
        template<class T> concept has_indirection = requires(T t) {*t;};
    }
}
/** @example concepts/has_indirection.cpp */