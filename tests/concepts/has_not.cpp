#include <iostream>
#include <core/types.hpp>
#include <concepts/has_not.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Does 'u8' have with itself a not '~' operator? " << lux::concepts::has_not<lux::u8>;
    return 0;
}