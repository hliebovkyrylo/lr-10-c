#include <stdio.h>
#include "caterpillar.h"
#include <windows.h>

int task_1() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int H, S1, S2;
    int days;

    printf("¬вед≥ть висоту жердини (H) (в см): ");
    if (scanf_s("%d", &H) != 1 || H <= 0) {
        return 1;
    }

    printf("¬вед≥ть в≥дстань, €ку гусениц€ долаЇ вдень (S1) (в см): ");
    if (scanf_s("%d", &S1) != 1 || S1 <= 0) {
        printf("Ќекоректне значенн€ в≥дстан≥ S1.\n");
        return 1;
    }

    printf("¬вед≥ть в≥дстань, на €ку гусениц€ спускаЇтьс€ вноч≥ (S2) (в см): ");
    if (scanf_s("%d", &S2) != 1 || S2 < 0 || S2 >= S1) {
        printf("Ќекоректне значенн€ в≥дстан≥ S2 (S2 повинно бути менше за S1).\n");
        return 1;
    }


    days = calculate_days(H, S1, S2);

    if (days == -1) {
        printf("Ќекоректн≥ вх≥дн≥ дан≥.\n");
    }
    else {
        printf("√усениц€ дос€гне вершини жердини через %d дн≥в.\n", days);
    }

    return 0;
}
