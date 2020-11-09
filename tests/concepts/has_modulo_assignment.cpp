#include <iostream>
#include <core/types.hpp>
#include <concepts/has_modulo_assignment.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a modulo assignment '%=' operator? " << lux::concepts::has_modulo_assignment<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a modulo assignment '%=' operator? " << lux::concepts::has_modulo_assignment<lux::u8>;
    return 0;
}