#include <stdio.h>

/*
* main - This program returns the average of 3 numbers 
*
* return: Always 0
*/

int main()
{
    int a, b, c, average;

    printf("Enter your first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);

    printf("Enter your last number: ");
    scanf("%d", &c);

    average = (a + b + c) / 3;

    printf("The average of the three numbers are: %d", average);
}
