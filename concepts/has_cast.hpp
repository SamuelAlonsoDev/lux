#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T and U types share an static cast 'static_cast<U>(t)' operator overloading
        template<class T, class U> concept has_cast = requires(T t) {static_cast<U>(t);};
    }
}
/** @example concepts/has_cast.cpp */