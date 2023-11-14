#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    int sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("the sum is %d \n", sum);

    return 0;
}
