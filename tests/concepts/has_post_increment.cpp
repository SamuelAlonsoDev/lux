#include <iostream>
#include <core/types.hpp>
#include <concepts/has_post_increment.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Does 'u8' have a post increment '++' operator? " << lux::concepts::has_post_increment<lux::u8>;
    return 0;
}