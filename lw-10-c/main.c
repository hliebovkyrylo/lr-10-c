#include <stdio.h>
#include <windows.h>

int task_1();
int task_2();

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int choice;
    printf("������� �������� (0 ��� 1): ");
    scanf_s("%d", &choice);

    switch (choice) {
    case 0:
        task_1();
        break;
    case 1:
        task_2();
        break;
    default:
        printf("����������� ����.\n");
        break;
    }

    return 0;
}