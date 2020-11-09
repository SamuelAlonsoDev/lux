#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T type has a subscript 't[0u]' operator overloading
        template<class T> concept has_subscript = requires(T t) {t[0u];};
    }
}
/** @example concepts/has_subscript.cpp */