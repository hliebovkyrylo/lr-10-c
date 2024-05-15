#include <math.h>
#include "mathFunctions.h"

#define COUNTER 0
#define SIN_FUNC(x) sin_func(x)
#define COS_FUNC(x) cos_func(x)

float sin_func(float x) {
    return sin(x);
}

float cos_func(float x) {
    return cos(x);
}

int get_counter() {
    return COUNTER;
}