#include <stdio.h>

int main()
{
    int arr[] = {80, 50, 55, 20, 92};
    int k = 40, n = 5;
    int i, j;

    printf("Given array elements are :\n");

    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = %d,  ", i, arr[i]);
    }

    j = k;

    while (j < n)
    {
        arr[j - 1] = arr[j];
        j = j + 1;
    }


    n = n - 1;

    printf("\nElements of array after deletion:\n");

    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = %d,  ", i, arr[i]);
    }
}