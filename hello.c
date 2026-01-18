#include <stdio.h>
#include <time.h>

int main() {
    char name[50];
    time_t t;
    time(&t);

    printf("YOUR NAME: ");
    scanf("%49s", name);

    printf("Hello %s, right now the time is %s", name, ctime(&t));
    return 0;
}
