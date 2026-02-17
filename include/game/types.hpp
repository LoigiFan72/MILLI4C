#pragma once

#include <cstddef>
#include <cstdint>

#include <limits>
#include <type_traits>

#define NULL 0

// unsigned/signed shi
typedef std::int8_t s8;
typedef std::int16_t s16;
typedef std::int32_t s32;
typedef std::int64_t s64;
typedef std::uint8_t u8;
typedef std::uint16_t u16;
typedef std::uint32_t u32;
typedef std::uint64_t u64;
typedef std::uint32_t uint;
typedef float f32;
typedef double f64;
typedef unsigned short ushort;
typedef unsigned char uchar;
//arm shit
#ifdef __cplusplus

#define nullptr NULL

typedef u32 uintptr_t;
typedef s32 intptr_t;

#endif

#define split(S) __attribute__((section("i." #S))) S
