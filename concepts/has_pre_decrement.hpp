#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T has a pre-decrement '--t' operator overloading
        template<class T> concept has_pre_decrement = requires(T t) {--t;};
    }
}
/** @example concepts/has_pre_decrement.cpp */