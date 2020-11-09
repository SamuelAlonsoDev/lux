#include <iostream>
#include <core/types.hpp>
#include <concepts/has_spaceship.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share an spaceship '<=>' operator? " << lux::concepts::has_spaceship<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself an spaceship '<=>' operator? " << lux::concepts::has_spaceship<lux::u8>;
    return 0;
}