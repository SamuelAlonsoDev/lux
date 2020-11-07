#include <iostream>
#include <concepts/is_integer.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is 'u8' an integer type? " << lux::concepts::is_integer<lux::u8> <<
    "\nIs 'f32' an integer type? " << lux::concepts::is_integer<lux::f32>;
    return 0;
}