#pragma once

namespace lux
{
    namespace concepts
    {
        template<class T> class is_pointer_class
        {
        public:
            constexpr static bool value = false;
        };

        template<class T> class is_pointer_class<T*>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile-time if T is a pointer type
        template<class T> concept is_pointer = is_pointer_class<T>::value;
    }
}
/** @example concepts/is_pointer.cpp */