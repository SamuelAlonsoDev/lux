#include <iostream>
#include <core/types.hpp>
#include <concepts/is_same.hpp>

int main()
{
    using u8_t = lux::u8;
    using non_u8_t = lux::f32;
    std::cout << std::boolalpha <<
    "Is 'u8_t' type equal to 'u8' type? " << lux::concepts::is_same<lux::u8, u8_t> <<
    "\nIs 'non_u8_t' type equal to 'u8' type? " << lux::concepts::is_same<lux::u8, non_u8_t>;
    return 0;
}