#include <iostream>
#include <core/types.hpp>
#include <concepts/has_bitshift_right.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a bitshift right '>>' operator? " << lux::concepts::has_bitshift_right<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a bitshift right '>>' operator? " << lux::concepts::has_bitshift_right<lux::u8>;
    return 0;
}