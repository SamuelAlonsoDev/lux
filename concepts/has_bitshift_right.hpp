#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T and U types share a bitwise shift right 't >> t' or 't >> u' operator overloading
        template<class T, class U = T> concept has_bitshift_right = requires(T t, U u) {t >> u;};
    }
}
/** @example concepts/has_bitshift_right.cpp */