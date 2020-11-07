#include <iostream>
#include <concepts/is_signed.hpp>

int main()
{
    std::cout << std::boolalpha <<
    "Is 's8' a signed type? " << lux::concepts::is_signed<lux::s8> <<
    "\nIs 'u8' a signed type? " << lux::concepts::is_signed<lux::u8>;
    return 0;
}