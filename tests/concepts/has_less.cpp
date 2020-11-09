#include <iostream>
#include <core/types.hpp>
#include <concepts/has_less.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a less '<' operator? " << lux::concepts::has_less<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a less '<' operator? " << lux::concepts::has_less<lux::u8>;
    return 0;
}