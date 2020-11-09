#include <iostream>
#include <core/types.hpp>
#include <concepts/has_or.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share an or '|' operator? " << lux::concepts::has_or<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself an or '|' operator? " << lux::concepts::has_or<lux::u8>;
    return 0;
}