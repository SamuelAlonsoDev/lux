#include <iostream>
#include <core/types.hpp>
#include <concepts/is_reference.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is 'u8&' a reference type? " << lux::concepts::is_reference<lux::u8&> <<
    "\nIs 'u8&&' a reference type? " << lux::concepts::is_reference<lux::u8&&> <<
    "\nIs 'u8' a reference type? " << lux::concepts::is_reference<lux::u8>;
    return 0;
}