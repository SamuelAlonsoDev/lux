#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T and U types share a greater equal 't >= t' or 't >= u' operator overloading
        template<class T, class U = T> concept has_greater_equal = requires(T t, U u) {t >= u;};
    }
}
/** @example concepts/has_greater_equal.cpp */