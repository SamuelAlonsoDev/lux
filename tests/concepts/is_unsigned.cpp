#include <iostream>
#include <concepts/is_unsigned.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is 'u8' an unsigned type? " << lux::concepts::is_unsigned<lux::u8> <<
    "\nIs 's8' an unsigned type? " << lux::concepts::is_unsigned<lux::s8>;
    return 0;
}