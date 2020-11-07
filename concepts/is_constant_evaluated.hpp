#pragma once

namespace lux
{
    namespace concepts
    {
        ///Returns at compile-time if the expression is being evaluated as a constant expression
        [[nodiscard]] inline constexpr const bool is_constant_evaluated() noexcept
        {
            return __builtin_is_constant_evaluated();
        }
    }
}
/** @example concepts/is_constant_evaluated.cpp */