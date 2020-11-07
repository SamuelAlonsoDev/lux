#include <iostream>
#include <core/types.hpp>
#include <concepts/is_volatile.hpp>
#include <concepts/remove_volatile.hpp>

int main()
{
    volatile lux::u8 a;
    std::cout << std::boolalpha <<
    "Is the type of 'a' with removed volatile a volatile type? " << lux::concepts::is_volatile<lux::concepts::remove_volatile<decltype(a)>>
    << "\nIs the type of 'a' a volatile type? " << lux::concepts::is_volatile<decltype(a)>;
    return 0;
}