#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};

struct Complex addComplex(struct Complex num1, struct Complex num2)
{
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2)
{
    struct Complex result;
    result.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    result.imag = (num1.real * num2.imag) + (num1.imag * num2.real);
    return result;
}

void displayComplex(struct Complex num)
{
    printf("%.2f + %.2fi\n", num.real, num.imag);
}

int main()
{
    struct Complex complexNum1, complexNum2, sumResult, productResult;

    printf("Input details for Complex Number 1 (real imag): ");
    scanf("%f %f", &complexNum1.real, &complexNum1.imag);

    printf("Input details for Complex Number 2 (real imag): ");
    scanf("%f %f", &complexNum2.real, &complexNum2.imag);

    sumResult = addComplex(complexNum1, complexNum2);

    productResult = multiplyComplex(complexNum1, complexNum2);

    printf("\nSum of Complex Numbers:\n");
    displayComplex(sumResult);

    printf("\nProduct of Complex Numbers:\n");
    displayComplex(productResult);

    return 0;
}
