#pragma once
#include <core/types.hpp>

namespace lux
{
    namespace concepts
    {
        template<class T> class is_unsigned_class
        {
        public:
            constexpr static bool value = false;
        };

        template<> class is_unsigned_class<bool>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_unsigned_class<u8>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_unsigned_class<u16>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_unsigned_class<u32>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_unsigned_class<u64>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile-time if T is unsigned type \n \n Unsigned types are: bool, u8, u16, u32 and u64
        template<class T> concept is_unsigned = is_unsigned_class<T>::value;
    }
}
/** @example concepts/is_unsigned.cpp */