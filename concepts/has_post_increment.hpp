#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T type has a post-increment 't++' operator overloading
        template<class T> concept has_post_increment = requires(T t) {t++;};
    }
}
/** @example concepts/has_post_increment.cpp */