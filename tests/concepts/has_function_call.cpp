#include <iostream>
#include <core/types.hpp>
#include <concepts/has_function_call.hpp>

class c
{
private:
    lux::u8 u;
public:
    inline constexpr void operator()(c other) noexcept
    {
        u += other.u;
    }
};

int main()
{
    std::cout << std::boolalpha <<
    "Do 'u8' and 's8' share a function call '()' operator? " << lux::concepts::has_function_call<lux::u8, lux::s8>
    << "\nDoes 'c' have with itself a function call '()' operator? " << lux::concepts::has_function_call<c, c>;
    return 0;
}