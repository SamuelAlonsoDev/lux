#pragma once

namespace lux
{
    namespace concepts
    {
        template<class T> class is_array_class
        {
        public:
            constexpr static bool value = false;
        };

        template<class T> class is_array_class<T[]>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile-time if T is an array type
        template<class T> concept is_array = is_array_class<T>::value;
    }
}
/** @example concepts/is_array.cpp */