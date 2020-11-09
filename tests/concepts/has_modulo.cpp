#include <iostream>
#include <core/types.hpp>
#include <concepts/has_modulo.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a modulo '%' operator? " << lux::concepts::has_modulo<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a modulo '%' operator? " << lux::concepts::has_modulo<lux::u8>;
    return 0;
}