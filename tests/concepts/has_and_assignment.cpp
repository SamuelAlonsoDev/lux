#include <iostream>
#include <core/types.hpp>
#include <concepts/has_and_assignment.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share an and assignment '&=' operator? " << lux::concepts::has_and_assignment<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself an and assignment '&=' operator? " << lux::concepts::has_and_assignment<lux::u8>;
    return 0;
}