#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T and U types share a bitwise xor 't ^ t' or 't ^ u' operator overloading
        template<class T, class U = T> concept has_xor = requires(T t, U u) {t ^ u;};
    }
}
/** @example concepts/has_xor.cpp */