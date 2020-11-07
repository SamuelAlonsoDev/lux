#include <iostream>
#include <core/types.hpp>
#include <concepts/is_volatile.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is 'volatile u8' a volatile type? " << lux::concepts::is_volatile<volatile lux::u8> <<
    "\nIs 'u8' a volatile type? " << lux::concepts::is_volatile<lux::u8>;
    return 0;
}