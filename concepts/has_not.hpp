#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T type has a bitwise not '~t' operator overloading
        template<class T> concept has_not = requires(T t) {~t;};
    }
}
/** @example concepts/has_not.cpp */