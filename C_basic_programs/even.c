//C program to find out a number is even or not.

#include <stdio.h>
int main()
{
    int numb, i;
    printf("Enter a number:");
    scanf("%d", &numb);
    if (numb % 2 == 0)
    {
        printf("A even number");
    }
    else
    {
        printf("A odd number");
    }
}
