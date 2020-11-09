#include <iostream>
#include <core/types.hpp>
#include <concepts/has_not_equal.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a not equal '!=' operator? " << lux::concepts::has_not_equal<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a not equal '!=' operator? " << lux::concepts::has_not_equal<lux::u8>;
    return 0;
}