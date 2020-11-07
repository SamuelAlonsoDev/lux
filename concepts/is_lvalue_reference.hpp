#pragma once

namespace lux
{
    namespace concepts
    {
        template<class T> class is_lvalue_reference_class
        {
        public:
            constexpr static bool value = false;
        };

        template<class T> class is_lvalue_reference_class<T&>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile-time if T is an lvalue reference type
        template<class T> concept is_lvalue_reference = is_lvalue_reference_class<T>::value;
    }
}
/** @example concepts/is_lvalue_reference.cpp */