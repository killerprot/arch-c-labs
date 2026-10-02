#include <stdio.h>


#define DAYS_IN_YEAR 365
#define HOURS_IN_DAY 24
#define SECONDS_IN_HOUR 3600

int main() {
    int years = 18;
    int total_days = years * DAYS_IN_YEAR;
    int total_hours = total_days * HOURS_IN_DAY;

    int total_seconds = total_hours * SECONDS_IN_HOUR;


    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n",
        total_seconds, total_hours, total_days, years);

    return 0;
}
