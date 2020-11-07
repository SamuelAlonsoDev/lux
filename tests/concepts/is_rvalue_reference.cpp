#include <iostream>
#include <core/types.hpp>
#include <concepts/is_rvalue_reference.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is 'u8&&' an rvalue reference type? " << lux::concepts::is_rvalue_reference<lux::u8&&> <<
    "\nIs 'u8' an rvalue reference type? " << lux::concepts::is_rvalue_reference<lux::u8>;
    return 0;
}