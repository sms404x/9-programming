#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    struct tm *local;
    char time_str[20];

    tzset();              // load local timezone
    time(&now);
    local = localtime(&now);

    strftime(time_str, sizeof(time_str), "%I:%M:%S %p", local);

    printf("Hello Sajin, right now the time is %s\n", time_str);

    return 0;
}
