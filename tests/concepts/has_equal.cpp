#include <iostream>
#include <core/types.hpp>
#include <concepts/has_equal.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share an equal '==' operator? " << lux::concepts::has_equal<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself an equal '==' operator? " << lux::concepts::has_equal<lux::u8>;
    return 0;
}