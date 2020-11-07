#pragma once

namespace lux
{
    namespace concepts
    {
        template<class T> class is_reference_class
        {
        public:
            constexpr static bool value = false;
        };

        template<class T> class is_reference_class<T&>
        {
        public:
            constexpr static bool value = true;
        };

        template<class T> class is_reference_class<T&&>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile-time if T is a reference
        template<class T> concept is_reference = is_reference_class<T>::value;
    }
}
/** @example concepts/is_reference.cpp */