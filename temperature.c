#include <stdio.h>
#include <conio.h>

int main()
{

    float farenhite, celcius;

    printf("Enter farenhite: ");
    scanf("%f", &farenhite);

    celcius = ((farenhite - 32) / 9) * 5;

    printf("The celius is : %f", celcius);

    // normal human body temperature =37 degree C or 98.6 degree F
    return 0;
}