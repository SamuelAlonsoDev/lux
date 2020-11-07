#include <iostream>
#include <concepts/is_size.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is the size of 'u8' of 1 byte? " << lux::concepts::is_size<lux::u8, 1u>;
    return 0;
}