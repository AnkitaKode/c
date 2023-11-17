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

    // Normal Method
    // printf("Enter the value of student 1: ");
    // scanf("%d", &marks[0]);
    // printf("Enter the value of student 2: ");
    // scanf("%d", &marks[1]);
    // printf("Enter the value of student 3: ");
    // scanf("%d", &marks[2]);
    // printf("Enter the value of student 4: ");
    // scanf("%d", &marks[3]);
    // printf("The marks of students are: %d %d %d", marks[0], marks[1], marks[2], marks[3]);
    
    return 0;
}