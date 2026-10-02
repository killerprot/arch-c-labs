#include <stdio.h>

// Константы для перевода времени
#define DAYS_IN_YEAR 365
#define HOURS_IN_DAY 24
#define SECONDS_IN_HOUR 3600

int main() {
    int years = 18;
    int total_days = years * DAYS_IN_YEAR;
    int total_hours = total_days * HOURS_IN_DAY;

    // Использование long long для предотвращения переполнения при подсчете секунд
    long long total_seconds = (long long)total_hours * SECONDS_IN_HOUR;

    // Вывод хронометража в обратном порядке
    printf("Тики: %lld|Часы: %d|Дни: %d|Годы: %d\n",
           total_seconds, total_hours, total_days, years);

    return 0;
}
