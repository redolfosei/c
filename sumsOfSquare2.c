#include <stdio.h>

int main()
{

    int n, sum = 0;

    printf("--This program prints the sum of squared numbers--"); 

    printf("\n-How to use the program-");
    printf("\n-Enter all numbers you want to sum up their squared value-");
    printf("\n**Enter 0 to quit at any time**"); 

    while (1)
    {

        printf("\n Enter a number here: ");
        scanf("%d", &n);

        if (n == 0)
            break;
        sum += n * n;
    }

    printf("The sum of these numbers are: %d", sum);

    return 0;
}