#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T and U types share a bitwise xor assignment 't ^= t' or 't ^= u' operator overloading
        template<class T, class U = T> concept has_xor_assignment = requires(T t, U u) {t ^= u;};
    }
}
/** @example concepts/has_xor_assignment.cpp */