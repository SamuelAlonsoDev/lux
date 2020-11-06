#pragma once
#include <exception>

namespace lux
{
    using exception = std::exception;

    class index_overflow : public exception
    {
    public:
        inline const char* what() const throw()
        {
            return "index overflow";
        }
    };
}