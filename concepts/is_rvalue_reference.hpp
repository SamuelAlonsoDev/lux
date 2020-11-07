#pragma once

namespace lux
{
    namespace concepts
    {
        template<class T> class is_rvalue_reference_class
        {
        public:
            constexpr static bool value = false;
        };

        template<class T> class is_rvalue_reference_class<T&&>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile-time if T is an rvalue reference type
        template<class T> concept is_rvalue_reference = is_rvalue_reference_class<T>::value;
    }
}
/** @example concepts/is_rvalue_reference.cpp */