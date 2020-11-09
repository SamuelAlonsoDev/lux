#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if T is a class type \n \n Remember that class types are: incomplete class, class and struct
        template<class T> concept is_class = __is_class(T);
    }
}
/** @example concepts/is_class.cpp */