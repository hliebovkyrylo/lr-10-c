#include <math.h>
#include "mathFunctions.h"

static int counter = 0;

float sin_func(float x) {
    counter++;
    return sin(x);
}

float cos_func(float x) {
    counter++;
    return cos(x);
}

int get_counter() {
    return counter;
}
