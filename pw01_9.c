#include <stdio.h>

// Демонстрация каскадного вызова пользовательских функций
void phase_2() {
    printf("BETA ");
}

void phase_1() {
    printf("ALPHA ");
    phase_2(); // Вызов вложенной функции
    printf("GAMMA ");
}

int main() {
    printf("START ");
    phase_1();
    printf("END\n");
    return 0;
}
