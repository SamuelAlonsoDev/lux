#include <iostream>
#include <core/types.hpp>
#include <concepts/is_rvalue_reference.hpp>
#include <concepts/add_rvalue_reference.hpp>

int main()
{
    lux::u8 a;
    std::cout << std::boolalpha <<
    "Is the type of 'a' with rvalue reference an rvalue reference type? " << lux::concepts::is_rvalue_reference<lux::concepts::add_rvalue_reference<decltype(a)>>
    << "\nIs the type of 'a' an rvalue reference type? " << lux::concepts::is_rvalue_reference<decltype(a)>;
    return 0;
}