#include <iostream>
#include <core/types.hpp>
#include <concepts/has_xor.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a xor '^' operator? " << lux::concepts::has_xor<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a xor '^' operator? " << lux::concepts::has_xor<lux::u8>;
    return 0;
}