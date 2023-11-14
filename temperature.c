#include <stdio.h>
#include <conio.h>

int main()
{

    float farenhite, celius;

    printf("Enter farenhite: ");
    scanf("%f", &farenhite);

    celius = ((farenhite - 32) / 9) * 5;

    printf("The celius is : %f", celius);

    // normal human body temperature =37 C or 98.6 F
    return 0;
}