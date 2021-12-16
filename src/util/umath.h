
#ifndef UMATH_H
#define UMATH_H

#include <math.h>
#include "types.h"

#define ADD(x, y) (x) + (y)
#define SUB(x, y) (x) - (y)
#define MUL(x, y) (x) * (y)
#define DIV(x, y) (x) / (y)
#define MOD(x, y) (x) % (y)


extern vec2 Dis2D(vec2 A, vec2 B){
    vec2 Vector; 
    Vector.x = sqrt((B.x - A.x));
    Vector.y = sqrt((B.y - A.y)); 
    return Vector;
}

#endif
