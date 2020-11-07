#include <iostream>
#include <core/types.hpp>
#include <concepts/is_const.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is 'const u8' a const type? " << lux::concepts::is_const<const lux::u8> <<
    "\nIs 'u8' a const type? " << lux::concepts::is_const<lux::u8>;
    return 0;
}