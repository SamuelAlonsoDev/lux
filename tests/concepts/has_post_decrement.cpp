#include <iostream>
#include <core/types.hpp>
#include <concepts/has_post_decrement.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Does 'u8' have a post decrement '--' operator? " << lux::concepts::has_post_decrement<lux::u8>;
    return 0;
}