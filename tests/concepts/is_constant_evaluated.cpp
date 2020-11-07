#include <iostream>
#include <core/types.hpp>
#include <concepts/is_constant_evaluated.hpp>

[[nodiscard]] inline constexpr const bool compile_time_foo() noexcept
{
    return lux::concepts::is_constant_evaluated();
}

[[nodiscard]] inline const bool run_time_foo() noexcept
{
    return lux::concepts::is_constant_evaluated();
}

int main()
{
    constexpr const bool b = compile_time_foo();
    const bool bb = run_time_foo();
    std::cout << std::boolalpha <<
    "Is 'compile_time_foo' evaluated as a constant expression? " << b <<
    "\nIs 'run_time_foo' evaluated as a constant expression? " << bb;
    return 0;
}