#include <iostream>
#include <core/types.hpp>
#include <concepts/is_void.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is 'void' a void type? " << lux::concepts::is_void<void> <<
    "\nIs 'u8' a void type? " << lux::concepts::is_void<lux::u8>;
    return 0;
}