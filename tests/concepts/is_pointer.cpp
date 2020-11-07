#include <iostream>
#include <core/types.hpp>
#include <concepts/is_pointer.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is 'u8*' a pointer type? " << lux::concepts::is_pointer<lux::u8*> <<
    "\nIs 'u8' a pointer type? " << lux::concepts::is_pointer<lux::u8>;
    return 0;
}