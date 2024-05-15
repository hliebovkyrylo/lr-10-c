#include <stdio.h>
#include <windows.h>

#define TASK_1 task_1
#define TASK_2 task_2

int task_1();
int task_2();

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice;

    printf("Select program(0 or 1): ");
    scanf_s("%d", &choice);

    switch (choice) {
        case 0:
            TASK_1();
            break;
        case 1:
            TASK_2();
            break;
        default:
            printf("Incorrect selection.\n");
            break;
    }
    return 0;
}