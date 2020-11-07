#include <iostream>
#include <core/types.hpp>
#include <concepts/is_pointer.hpp>
#include <concepts/add_pointer.hpp>

int main()
{
    lux::u8 a;
    std::cout << std::boolalpha <<
    "Is the type of 'a' with added pointer a pointer type? " << lux::concepts::is_pointer<lux::concepts::add_pointer<decltype(a)>>
    << "\nIs the type of 'a' a pointer type? " << lux::concepts::is_pointer<decltype(a)>;
    return 0;
}