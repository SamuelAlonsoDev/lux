#include <iostream>
#include <core/types.hpp>
#include <concepts/has_addition.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share an addition '+' operator? " << lux::concepts::has_addition<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself an addition '+' operator? " << lux::concepts::has_addition<lux::u8>;
    return 0;
}