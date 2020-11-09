#include <iostream>
#include <core/types.hpp>
#include <concepts/has_logical_and.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a logical and '&&' operator? " << lux::concepts::has_logical_and<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a logical and '&&' operator? " << lux::concepts::has_logical_and<lux::u8>;
    return 0;
}