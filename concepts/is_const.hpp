#pragma once

namespace lux
{
    namespace concepts
    {
        template<class T> class is_const_class
        {
        public:
            constexpr static bool value = false;
        };

        template<class T> class is_const_class<const T>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile-time if T has a const qualifier
        template<class T> concept is_const = is_const_class<T>::value;
    }
}
/** @example concepts/is_const.cpp */