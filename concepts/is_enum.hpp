#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T is an enumeration type \n \n Remember that enumeration types are: enum and enum class
        template<class T> concept is_enum = __is_enum(T);
    }
}
/** @example concepts/is_enum.cpp */