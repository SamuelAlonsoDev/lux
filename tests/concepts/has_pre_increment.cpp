#include <iostream>
#include <core/types.hpp>
#include <concepts/has_pre_increment.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Does 'u8' have a pre increment '++' operator? " << lux::concepts::has_pre_increment<lux::u8>;
    return 0;
}