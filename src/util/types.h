
#ifndef TYPES_H
#define TYPES_H

// fixed width numeric types
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h> 

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

typedef float f32;
typedef double f64;

// Ehe.
typedef struct{ 
    u32 x;
    u32 y; 
} vec2;

#endif
