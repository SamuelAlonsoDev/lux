#include <iostream>
#include <core/types.hpp>
#include <concepts/has_bitshift_right_assignment.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a bitshift right assignment '>>=' operator? " << lux::concepts::has_bitshift_right_assignment<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself a bitshift right assignment '>>=' operator? " << lux::concepts::has_bitshift_right_assignment<lux::u8>;
    return 0;
}