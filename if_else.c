#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter the value to check: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf(" %d is Even\n", a);
    }
    else
    {
        printf("odd");
    };
    return 0;
}