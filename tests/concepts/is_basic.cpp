#include <iostream>
#include <concepts/is_basic.hpp>

class c{};

int main()
{
    std::cout << std::boolalpha <<
    "Is 'u8' a basic type? " << lux::concepts::is_basic<lux::u8> <<
    "\nIs 'c' a basic type? " << lux::concepts::is_basic<c>;
    return 0;
}