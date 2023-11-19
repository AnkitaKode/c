#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0]; // OR ptr=marks
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value marks for student %d : ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of marks for student is %d.\n", marks[i]);
    }

    return 0;
}