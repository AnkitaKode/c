#include <stdio.h>
#include <conio.h>

int main()
{
    // clrscr();
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("Sum: %d", sum);

    getch();
    return 0;
}