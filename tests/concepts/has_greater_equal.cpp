#include <iostream>
#include <core/types.hpp>
#include <concepts/has_greater_equal.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a greater equal '>=' operator? " << lux::concepts::has_greater_equal<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a greater equal '>=' operator? " << lux::concepts::has_greater_equal<lux::u8>;
    return 0;
}