#include <stdio.h>
#include <conio.h>
int main()
{
    // clrscr();

    int a, b, multiply;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);

    multiply = a * b;
    printf("product = %d" ,multiply);
    getch();
    return 0;
}