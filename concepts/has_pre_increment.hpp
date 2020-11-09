#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T has a pre-increment '++t' operator overloading
        template<class T> concept has_pre_increment = requires(T t) {++t;};
    }
}
/** @example concepts/has_.cpp */