#pragma once
#include <core/types.hpp>

namespace lux
{
    namespace concepts
    {
        template<class T> class is_integer_class
        {
        public:
            constexpr static bool value = false;
        };

        template<> class is_integer_class<bool>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_integer_class<u8>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_integer_class<s8>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_integer_class<u16>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_integer_class<s16>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_integer_class<u32>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_integer_class<s32>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_integer_class<u64>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_integer_class<s64>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile-time if T is an integer type \n \n Integer types are: bool, u8, s8, u16, s16, u32, s32, u64 and s64
        template<class T> concept is_integer = is_integer_class<T>::value;
    }
}
/** @example concepts/is_integer.cpp */