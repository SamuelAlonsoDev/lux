#include <iostream>
#include <core/types.hpp>
#include <concepts/is_class.hpp>

class ic;

class c{};

struct s{};

int main()
{
    std::cout << std::boolalpha <<
    "Is 'ic' a class type? " << lux::concepts::is_class<ic> <<
    "\nIs 'c' a class type? " << lux::concepts::is_class<c> <<
    "\nIs 's' a class type? " << lux::concepts::is_class<s> <<
    "\nIs 'u8' a class type? " << lux::concepts::is_class<lux::u8>;
    return 0;
}