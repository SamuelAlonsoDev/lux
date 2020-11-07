#pragma once
#include <concepts/remove_references.hpp>

namespace lux
{
    namespace concepts
    {
        ///Returns safely at compile-time T with rvalue reference type
        template<class T> using add_rvalue_reference = remove_references<T>&&;
    }
}
/** @example concepts/add_rvalue_reference.cpp */