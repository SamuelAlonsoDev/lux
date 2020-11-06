#pragma once
#include <core/types.hpp>

namespace lux
{
    namespace concepts
    {
        template<class T> class is_basic_class
        {
        public:
            constexpr static bool value = false;
        };

        template<> class is_basic_class<bool>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_basic_class<u8>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_basic_class<s8>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_basic_class<u16>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_basic_class<s16>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_basic_class<u32>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_basic_class<s32>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_basic_class<f32>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_basic_class<u64>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_basic_class<s64>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_basic_class<f64>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile-time whther or not T is a basic type \n \n Basic types are: bool, u8, s8, u16, s16, u32, s32, f32, u64, s64 and f64
        template<class T> concept is_basic = is_basic_class<T>::value;
    }
}
/** @example concepts/is_basic.cpp */