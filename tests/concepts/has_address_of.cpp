#include <iostream>
#include <core/types.hpp>
#include <concepts/has_address_of.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Does 'u8' have with itself an address of '&' operator? " << lux::concepts::has_address_of<lux::u8>;
    return 0;
}