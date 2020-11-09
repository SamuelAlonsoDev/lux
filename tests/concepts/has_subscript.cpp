#include <iostream>
#include <core/types.hpp>
#include <concepts/has_subscript.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Does 'u8[]' have a subscript '[]' operator? " << lux::concepts::has_subscript<lux::u8[]>;
    return 0;
}