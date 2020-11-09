#include <iostream>
#include <core/types.hpp>
#include <concepts/has_division_assignment.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a division assignment '/=' operator? " << lux::concepts::has_division_assignment<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a division assignment '/=' operator? " << lux::concepts::has_division_assignment<lux::u8>;
    return 0;
}