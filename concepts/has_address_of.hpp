#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T type has an address of '&t' operator overloading
        template<class T> concept has_address_of = requires(T t) {&t;};
    }
}
/** @example concepts/has_address_of.cpp */