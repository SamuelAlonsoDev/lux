#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time T with pointer type
        template<class T> using add_pointer = T*;
    }
}
/** @example concepts/add_pointer.cpp */