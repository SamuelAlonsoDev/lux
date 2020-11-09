#include <iostream>
#include <core/types.hpp>
#include <concepts/has_greater.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a greater '>' operator? " << lux::concepts::has_greater<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a greater '>' operator? " << lux::concepts::has_greater<lux::u8>;
    return 0;
}