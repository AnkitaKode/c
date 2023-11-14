#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    int vippass = 16;
    printf("Enter the age: ");
    scanf("%d", &a);

    if ((a <= 80 && a >= 18) || vippass == 16)
    {
        printf("You can drive.");
    }
    else
    {
        printf("you can't drive as you are a kid.");
    }
    return 0;
}