#pragma once

namespace lux
{
    namespace concepts
    {
        template<class T> class remove_pointer_class
        {
        public:
            using type = T;
        };

        template<class T> class remove_pointer_class<T*>
        {
        public:
            using type = T;
        };

        ///Returns at compile-time T without pointer type if any
        template<class T> using remove_pointer = typename remove_pointer_class<T>::type;
    }
}
/** @example concepts/remove_pointer.cpp */