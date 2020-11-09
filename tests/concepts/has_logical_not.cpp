#include <iostream>
#include <core/types.hpp>
#include <concepts/has_logical_not.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Does 'u8' have with itself a logical not '!' operator? " << lux::concepts::has_logical_not<lux::u8>;
    return 0;
}