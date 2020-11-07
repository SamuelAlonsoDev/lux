#pragma once

namespace lux
{
    namespace concepts
    {
        template<class T> class remove_const_class
        {
        public:
            using type = T;
        };

        template<class T> class remove_const_class<const T>
        {
        public:
            using type = T;
        };

        ///Returns at compile-time T without const qualifier if any
        template<class T> using remove_const = typename remove_const_class<T>::type;
    }
}
/** @example concepts/remove_const.cpp */