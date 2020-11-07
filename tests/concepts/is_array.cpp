#include <iostream>
#include <core/types.hpp>
#include <concepts/is_array.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is 'u8[]' an array type? " << lux::concepts::is_array<lux::u8[]> <<
    "\nIs 'u8' an array type? " << lux::concepts::is_array<lux::u8>;
    return 0;
}