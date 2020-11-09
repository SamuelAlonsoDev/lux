#include <iostream>
#include <core/types.hpp>
#include <concepts/has_pre_decrement.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Does 'u8' have a pre decrement '--' operator? " << lux::concepts::has_pre_decrement<lux::u8>;
    return 0;
}