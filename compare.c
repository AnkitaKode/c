#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{

    struct Time time1, time2, result;

    printf("Enter the first time: ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter the second time: ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    result.seconds = time1.seconds + time2.seconds;
    result.minutes = time1.minutes + time2.minutes + result.seconds / 60;
    result.hours = time1.hours + time2.hours + result.minutes / 60;

    result.minutes %= 60;
    result.seconds %= 60;

    printf("\n The Resultant Time: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);

    return 0;
}
