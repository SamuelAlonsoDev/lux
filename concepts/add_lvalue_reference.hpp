#pragma once
#include <remove_references.hpp>

namespace lux
{
    namespace concepts
    {
        ///Returns safely at compile-time T with lvalue reference type
        template<class T> using add_lvalue_reference = remove_references<T>&;
    }
}
/** @example concepts/add_lvalue_reference.cpp */