#include <stdio.h>

#define NODE_ID 42

void ping() {
    printf("PING");
}

void pong() {
    printf("PONG");
}

// Каскадная функция для имитации сетевого приветствия
void handshake() {
    ping();
    printf("-");
    pong();
    printf("-");
    ping();
}

int main() {
    int packet_size = NODE_ID * 4;
    int total_transfer = packet_size * 3;

    // Формирование структуры вывода протокола
    handshake();
    printf(":%d\n", packet_size);

    handshake();
    printf(":%d\n", total_transfer);

    printf("SESSION:CLOSED\n");

    return 0;
}
