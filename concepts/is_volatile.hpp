#pragma once

namespace lux
{
    namespace concepts
    {
        template<class T> class is_volatile_class
        {
        public:
            constexpr static bool value = false;
        };

        template<class T> class is_volatile_class<volatile T>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile-time if T has volatile qualifier
        template<class T> concept is_volatile = is_volatile_class<T>::value;
    }
}
/** @example concepts/is_volatile.cpp */