#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void wrongSwap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 5, b = 10;

    printf("Before swapping values of a = %d and b = %d\n", a, b);

    wrongSwap(a, b);
    printf("After swapping the valueof a = %d and b = %d\n", a, b); // no change

    swap(&a, &b);
    printf("After swapping values of a = %d and b = %d\n", a, b);

    return 0;
}