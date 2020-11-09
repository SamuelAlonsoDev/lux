#include <iostream>
#include <core/types.hpp>
#include <concepts/is_enum.hpp>

enum e{};

enum class ec{};

int main()
{
    std::cout << std::boolalpha <<
    "Is 'e' an enumeration type? " << lux::concepts::is_enum<e> <<
    "\nIs 'ec' an enumeration type? " << lux::concepts::is_enum<ec> <<
    "\nIs 'u8' an enumeration type? " << lux::concepts::is_enum<lux::u8>;
    return 0;
}