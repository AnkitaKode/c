#include <stdio.h>

int main()
{
    int a, b, c, d, max;
    printf("Enter the numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = a;

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }

    printf("The maximum of these numbers is %d\n", max);

    return 0;
}
