#include <iostream>
#include <core/types.hpp>
#include <concepts/is_const.hpp>
#include <concepts/remove_const.hpp>

int main()
{
    const lux::u8 a = 100u;
    std::cout << std::boolalpha <<
    "Is the type of 'a' with removed const a const type? " << lux::concepts::is_const<lux::concepts::remove_const<decltype(a)>>
    << "\nIs the type of 'a' a const type? " << lux::concepts::is_const<decltype(a)>;
    return 0;
}