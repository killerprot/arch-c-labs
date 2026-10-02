#include <stdio.h>

int main() {
    int reactor_core = 13;
    int dbl_reactor_core = reactor_core * 2;
    int sqr_reactor_core = reactor_core * reactor_core;

    // Построчечный вывод вектора состояния без объединения в один printf
    printf("[");
    printf("%d", reactor_core);
    printf(", ");
    printf("%d", dbl_reactor_core);
    printf(", ");
    printf("%d", sqr_reactor_core);
    printf("]\n");

    return 0;
}
