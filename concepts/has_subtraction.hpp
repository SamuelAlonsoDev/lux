#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T and U types share a subtraction 't - t' or 't - u' operator overloading
        template<class T, class U = T> concept has_subtraction = requires(T t, U u) {t - u;};
    }
}
/** @example concepts/has_subtraction.cpp */