#include <iostream>
#include <core/types.hpp>
#include <concepts/is_union.hpp>

union u{};

int main()
{
    std::cout << std::boolalpha <<
    "Is 'u' a union type? " << lux::concepts::is_union<u> <<
    "\nIs 'u8' a union type? " << lux::concepts::is_union<lux::u8>;
    return 0;
}