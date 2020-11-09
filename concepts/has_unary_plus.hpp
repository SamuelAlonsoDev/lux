#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T type has a unary plus '+t' operator overloading
        template<class T> concept has_unary_plus = requires(T t) {+t;};
    }
}
/** @example concepts/has_unary_plus.cpp */