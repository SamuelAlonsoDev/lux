#pragma once
#include <cstdint>

namespace lux
{
    ///8-bits unsigned integer type
    using u8 = std::uint8_t;

    ///8-bits signed integer type
    using s8 = std::int8_t;

    ///16-bits unsigned integer type
    using u16 = std::uint16_t;

    ///16-bits signed integer type
    using s16 = std::int16_t;

    ///32-bits unsigned integer type
    using u32 = std::uint32_t;

    ///32-bits signed integer type
    using s32 = std::int32_t;
    
    ///32-bits scalar single-precision floating-point type
    using f32 = float;

    ///64-bits unsigned integer type
    using u64 = std::uint64_t;

    ///64-bits signed integer type
    using s64 = std::int64_t;

    ///64-bits scalar double-precision floating-point type
    using f64 = double;
}
/** @example core/types.cpp */