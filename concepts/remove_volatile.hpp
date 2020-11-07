#pragma once

namespace lux
{
    namespace concepts
    {
        template<class T> class remove_volatile_class
        {
        public:
            using type = T;
        };

        template<class T> class remove_volatile_class<volatile T>
        {
        public:
            using type = T;
        };

        ///Returns at compile-time T without volatile qualifier if any
        template<class T> using remove_volatile = typename remove_volatile_class<T>::type;
    }
}
/** @example concepts/remove_volatile.cpp */