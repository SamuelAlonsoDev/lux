#include <iostream>
#include <core/types.hpp>
#include <concepts/has_or_assignment.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share an or assignment '|=' operator? " << lux::concepts::has_or_assignment<lux::u8, lux::s8>
    << "\nDoes 'u8' have with itself an or assignment '|=' operator? " << lux::concepts::has_or_assignment<lux::u8>;
    return 0;
}