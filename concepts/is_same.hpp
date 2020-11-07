#pragma once

namespace lux
{
    namespace concepts
    {
        template<class T, class U> class is_same_class
        {
        public:
            constexpr static bool value = false;
        };

        template<class T> class is_same_class<T, T>
        {
        public:
            constexpr static bool value = true;
        };

        ///Returns at compile-time if T and U are the same type \n \n Remember that it doesn't check if T and U are derived/parent types
        template<class T, class U> concept is_same = is_same_class<T, U>::value;
    }
}
/** @example concepts/is_same.cpp */