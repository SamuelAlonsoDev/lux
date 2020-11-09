#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T type has a function call with the args specified at U 't(u...)' operator overloading
        template<class T, class... U> concept has_function_call = requires(T t, U... u) {t(u...);};
    }
}
/** @example concepts/has_function_call.cpp */