#include <iostream>
#include <core/types.hpp>
#include <concepts/has_cast.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a cast 'static_cast<u8>(s8_var)' operator? " << lux::concepts::has_cast<lux::u8, lux::s8>;
    return 0;
}