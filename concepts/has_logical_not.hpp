#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T type has a logical not '!t' operator overloading
        template<class T> concept has_logical_not = requires(T t) {!t;};
    }
}
/** @example concepts/has_logical_not.cpp */