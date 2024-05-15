#include <stdio.h>
#include "caterpillar.h"

int task_1() {
    int H, S1, S2;
    int days;

    printf("Enter the height of the pole (H) (in cm):");
    if (scanf_s("%d", &H) != 1 || H <= 0) {
        printf("Incorrect height value H (H must be greater than 0).\n");
        return 1;
    }

    printf("Enter the distance covered by the caterpillar during the day (S1) (in cm):");
    if (scanf_s("%d", &S1) != 1 || S1 <= 0) {
        printf("Incorrect distance value S1.\n");
        return 1;
    }

    printf("Enter the distance the caterpillar descends at night (S2) (in cm):");
    if (scanf_s("%d", &S2) != 1 || S2 >= S1) {
        printf("Incorrect distance value S2 (S2 must be less than S1).\n");
        return 1;
    }
    else if (S2 < 0) {
        printf("Incorrect distance value S2.\n");
        return 1;
    }

    days = CALCULATE_DAYS(H, S1, S2);
    if (days == -1) {
        printf("Invalid input data.\n");
    }
    else {
        printf("The caterpillar will reach the top of the pole in %d days.\n", days);
    }
    return 0;
}