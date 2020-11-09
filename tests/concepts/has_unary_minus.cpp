#include <iostream>
#include <core/types.hpp>
#include <concepts/has_unary_minus.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Does 'u8' have a unary minus '-' operator? " << lux::concepts::has_unary_minus<lux::u8>;
    return 0;
}