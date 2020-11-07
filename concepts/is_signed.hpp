#pragma once
#include <core/types.hpp>

namespace lux
{
    namespace concepts
    {
        template<class T> class is_signed_class
        {
        public:
            constexpr static bool value = false;
        };

        template<> class is_signed_class<s8>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_signed_class<s16>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_signed_class<s32>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_signed_class<f32>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_signed_class<s64>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_signed_class<f64>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile time if T is a signed type \n \n Signed types are: s8, s16, s32, f32, s64 and f64
        template<class T> concept is_signed = is_signed_class<T>::value;
    }
}
/** @example concepts/is_signed.cpp */