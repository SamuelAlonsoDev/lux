#pragma once

#if defined(_MSC_VER)
#include <intrin.h>
#define s128 .m128i_i32
#define f128 .m128_f32
#define d128 .m128d_f64
#define f256 .m256_f32
#define d256 .m256d_f64
#define f512 .m512_f32
#define d512 .m512d_f64
#else
#if defined(lux_android) || defined(lux_ios) || defined(lux_mac)
#if defined(__ARM64_NEON__)
#include <arm_neon64.h>
#define s128
#define f128
#define d128
#endif
#else
#include <x86intrin.h>
#define s128
#define f128
#define d128
#define f256
#define d256
#define f512
#define d512
#endif
#endif