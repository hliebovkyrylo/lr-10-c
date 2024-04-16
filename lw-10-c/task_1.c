#include <stdio.h>
#include "caterpillar.h"
#include <windows.h>

int task_1() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int H, S1, S2;
    int days;

    printf("������ ������ ������� (H) (� ��): ");
    if (scanf_s("%d", &H) != 1 || H <= 0) {
        return 1;
    }

    printf("������ �������, ��� �������� ���� ����� (S1) (� ��): ");
    if (scanf_s("%d", &S1) != 1 || S1 <= 0) {
        printf("���������� �������� ������ S1.\n");
        return 1;
    }

    printf("������ �������, �� ��� �������� ���������� ����� (S2) (� ��): ");
    if (scanf_s("%d", &S2) != 1 || S2 < 0 || S2 >= S1) {
        printf("���������� �������� ������ S2 (S2 ������� ���� ����� �� S1).\n");
        return 1;
    }


    days = calculate_days(H, S1, S2);

    if (days == -1) {
        printf("��������� ����� ���.\n");
    }
    else {
        printf("�������� ������� ������� ������� ����� %d ���.\n", days);
    }

    return 0;
}
