#include <stdio.h>
#include "mathFunctions.h"
#include <windows.h>

int task_2() {
    SetConsoleOutputCP(1251);

    float x;
    const float pi = PI;

    printf("  xi      sin(xi)  Порівняння  cos(xi)\n");
    printf("----------------------------------------\n");

    for (x = 0; x <= 5 * pi; x += 0.5 * pi) {
        float y_sin = sin_func(x);
        float y_cos = cos_func(x);

        printf("%5.2f", x);
        printf("  %8.4f", y_sin);

        if (y_sin < y_cos)
            printf("        <");
        else if (y_sin > y_cos)
            printf("        >");
        else
            printf("        =");

        printf("  %8.4f\n", y_cos);
    }

    return 0;
}
