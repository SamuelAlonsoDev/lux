#pragma once
#include <exception>

namespace lux
{
    using exception = std::exception;

    class null_ptr : public exception
    {
    public:
        inline const char* what() const throw()
        {
            return "null_ptr";
        }
    };
}