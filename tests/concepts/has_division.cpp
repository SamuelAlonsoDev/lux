#include <iostream>
#include <core/types.hpp>
#include <concepts/has_division.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a division '/' operator? " << lux::concepts::has_division<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a division '/' operator? " << lux::concepts::has_division<lux::u8>;
    return 0;
}