#include <iostream>
#include <core/types.hpp>
#include <concepts/has_and.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share an and '&' operator? " << lux::concepts::has_and<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself an and '&' operator? " << lux::concepts::has_and<lux::u8>;
    return 0;
}