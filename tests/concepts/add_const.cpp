#include <iostream>
#include <core/types.hpp>
#include <concepts/is_const.hpp>
#include <concepts/add_const.hpp>

int main()
{
    lux::u8 a;
    std::cout << std::boolalpha <<
    "Is the type of 'a' with const qualifier a const type? " << lux::concepts::is_const<lux::concepts::add_const<decltype(a)>>
    << "\nIs the type of 'a' a const type? " << lux::concepts::is_const<decltype(a)>;
    return 0;
}