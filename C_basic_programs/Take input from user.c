#include <stdio.h>
int main()
{
    int no1, no2;
    int sum, sub, mult, mod;
    float div;

    printf("Enter any two numbers separated it by comma : ");
    scanf("%d,%d", &no1, &no2);

    // Performs all arithmetic operations
    sum = no1 + no2;
    sub = no1 - no2;
    mult = no1 * no2;
    div = (float)no1 / no2;
    mod = no1 % no2;

    // Prints the result of all arithmetic operations
    printf("The sum of the entered numbers : %d\n", sum);
    printf("The difference of the entered numbers : %d\n", sub);
    printf("The product of the entered numbers : %d\n", mult);
    printf("The quotient of the entered numbers : %f\n", div);
    printf("Mod = %d\n", mod); //remainder
}
