#include <stdio.h>

int main()
{
    int marks[4];

    // By loop method
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value marks for student %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of marks for student %d is :%d\n", i + 1, marks[i]);
    }

    return 0;
}