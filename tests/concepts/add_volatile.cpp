#include <iostream>
#include <core/types.hpp>
#include <concepts/is_volatile.hpp>
#include <concepts/add_volatile.hpp>

int main()
{
    lux::u8 a;
    std::cout << std::boolalpha <<
    "Is the type of 'a' with volatile qualifier a volatile type? " << lux::concepts::is_volatile<lux::concepts::add_volatile<decltype(a)>>
    << "\nIs the type of 'a' a volatile type? " << lux::concepts::is_volatile<decltype(a)>;
    return 0;
}