#include <stdio.h>
#include "caterpillar.h"
#include <windows.h>

int task_1() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int H, S1, S2;
    int days;

    printf("Введіть висоту жердини (H) (в см): ");
    if (scanf_s("%d", &H) != 1 || H <= 0) {
        return 1;
    }

    printf("Введіть відстань, яку гусениця долає вдень (S1) (в см): ");
    if (scanf_s("%d", &S1) != 1 || S1 <= 0) {
        printf("Некоректне значення відстані S1.\n");
        return 1;
    }

    printf("Введіть відстань, на яку гусениця спускається вночі (S2) (в см): ");
    if (scanf_s("%d", &S2) != 1 || S2 < 0 || S2 >= S1) {
        printf("Некоректне значення відстані S2 (S2 повинно бути менше за S1).\n");
        return 1;
    }


    days = calculate_days(H, S1, S2);

    if (days == -1) {
        printf("Некоректні вхідні дані.\n");
    }
    else {
        printf("Гусениця досягне вершини жердини через %d днів.\n", days);
    }

    return 0;
}
