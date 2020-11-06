#pragma once
#include <core/types.hpp>

namespace lux
{
    namespace concepts
    {
        template<class T> class is_floating_point_class
        {
        public:
            constexpr static bool value = false;
        };

        template<> class is_floating_point_class<f32>
        {
        public:
            constexpr static bool value = true;
        };

        template<> class is_floating_point_class<f64>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile-time whether or not T is a floating-point type \n \n Floating-point types are: f32 and f64
        template<class T> concept is_floating_point = is_floating_point_class<T>::value;
    }
}
/** @example concepts/is_floating_point.cpp */