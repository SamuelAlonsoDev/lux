#include <iostream>
#include <core/types.hpp>
#include <concepts/has_logical_or.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a logical or '||' operator? " << lux::concepts::has_logical_or<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a logical or '||' operator? " << lux::concepts::has_logical_or<lux::u8>;
    return 0;
}