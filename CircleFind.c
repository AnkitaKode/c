#include <stdio.h>

struct Circle
{
    double radius;
};

double calculateArea(struct Circle c)
{
    return 3.14159 * c.radius * c.radius;
}

double calculatePerimeter(struct Circle c)
{
    return 2 * 3.14159 * c.radius;
}

int main()
{
    struct Circle circle1, circle2;

    printf("Input details for Circle 1:\n");
    printf("Radius: ");
    scanf("%lf", &circle1.radius);

    printf("\nInput details for Circle 2:\n");
    printf("Radius: ");
    scanf("%lf", &circle2.radius);

    printf("\nCircle 1:\n");
    printf("Area: %.2lf\n", calculateArea(circle1));
    printf("Perimeter: %.2lf\n", calculatePerimeter(circle1));

    printf("\nCircle 2:\n");
    printf("Area: %.2lf\n", calculateArea(circle2));
    printf("Perimeter: %.2lf\n", calculatePerimeter(circle2));

    return 0;
}
