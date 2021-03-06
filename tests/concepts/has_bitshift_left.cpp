#include <iostream>
#include <core/types.hpp>
#include <concepts/has_bitshift_left.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a bitshift left '<<' operator? " << lux::concepts::has_bitshift_left<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a bitshift left '<<' operator? " << lux::concepts::has_bitshift_left<lux::u8>;
    return 0;
}