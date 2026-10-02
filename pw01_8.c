#include <stdio.h>

// Функция вывода одиночного сигнала синхронизации
void pulse() {
    printf("@");
}

int main() {
    // Формирование лесенки из символов в main
    pulse();
    printf("\n");

    pulse();
    pulse();
    printf("\n");

    pulse();
    pulse();
    pulse();
    printf("\n");

    return 0;
}
