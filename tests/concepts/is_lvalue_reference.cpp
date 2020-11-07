#include <iostream>
#include <core/types.hpp>
#include <concepts/is_lvalue_reference.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is 'u8&' an lvalue reference type? " << lux::concepts::is_lvalue_reference<lux::u8&> <<
    "\nIs 'u8' an lvalue reference type? " << lux::concepts::is_lvalue_reference<lux::u8>;
    return 0;
}