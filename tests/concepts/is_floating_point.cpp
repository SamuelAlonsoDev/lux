#include <iostream>
#include <concepts/is_floating_point.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is 'f32' a floating-point type? " << lux::concepts::is_floating_point<lux::f32> <<
    "\nIs 'u8' a floating-point type? " << lux::concepts::is_floating_point<lux::u8>;
    return 0;
}