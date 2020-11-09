#include <iostream>
#include <core/types.hpp>
#include <concepts/has_indirection.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Does 'u8' have with itself an indirection '*' operator? " << lux::concepts::has_indirection<lux::u8>;
    return 0;
}