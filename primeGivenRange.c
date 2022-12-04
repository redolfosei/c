#include <stdio.h>

int main()
{

    int number, c, i, range;

    printf("Enter a range you want to print prime numbers up to: ");
    scanf("%d", &range);

    number = 2;
    while (number <= range)
    {
        c = 0;
        i = 1;
        while (i <= number)
        {
            if (number % i == 0)
            {
                c++;
            }
            i++;
        }

        if (c == 2)
        {
            printf("Prime : %d\n", number);
        }
        number++;
    }

    return 0;
}