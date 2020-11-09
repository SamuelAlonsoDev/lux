#include <iostream>
#include <core/types.hpp>
#include <concepts/has_unary_plus.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Does 'u8' have a unary plus '+' operator? " << lux::concepts::has_unary_plus<lux::u8>;
    return 0;
}