#pragma once

namespace lux
{
    namespace concepts
    {
        template<class T> class remove_references_class
        {
        public:
            using type = T;
        };

        template<class T> class remove_references_class<T&>
        {
        public:
            using type = T;
        };

        template<class T> class remove_references_class<T&&>
        {
        public:
            using type = T;
        };

        ///Returns at compile-time T without lvalue or rvalue references if any
        template<class T> using remove_references = typename remove_references_class<T>::type;
    }
}
/** @example concepts/remove_references.cpp */