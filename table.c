#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 0; i <= 10; i++)
    {
        int m = n * i;
        printf(" %d*%i =%d \n", n, i, m);
    }

    return 0;
}
