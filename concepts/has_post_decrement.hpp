#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T type has a post-decrement 't--' operator overloading
        template<class T> concept has_post_decrement = requires(T t) {t--;};
    }
}
/** @example concepts/has_post_decrement.cpp */