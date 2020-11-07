#include <iostream>
#include <core/types.hpp>
#include <concepts/is_reference.hpp>
#include <concepts/remove_references.hpp>

int main()
{
    lux::u8&& a = 100u;
    std::cout << std::boolalpha <<
    "Is the type of 'a' with removed references a reference? " << lux::concepts::is_reference<lux::concepts::remove_references<decltype(a)>>
    << "\nIs the type of 'a' a reference? " << lux::concepts::is_reference<decltype(a)>;
    return 0;
}