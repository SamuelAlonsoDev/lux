#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T and U types share a division assignment 't /= t' or 't /= u' operator overloading
        template<class T, class U = T> concept has_division_assignment = requires(T t, U u) {t /= u;};
    }
}
/** @example concepts/has_division_assignment.cpp */