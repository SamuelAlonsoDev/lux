#include <iostream>
#include <core/types.hpp>
#include <concepts/is_lvalue_reference.hpp>
#include <concepts/add_lvalue_reference.hpp>

int main()
{
    lux::u8 a;
    std::cout << std::boolalpha <<
    "Is the type of 'a' with added lvalue reference an lvalue reference type? " << lux::concepts::is_lvalue_reference<lux::concepts::add_lvalue_reference<decltype(a)>>
    << "\nIs the type of 'a' an lvalue reference type? " << lux::concepts::is_lvalue_reference<decltype(a)>;
    return 0;
}