#include <stdio.h>

int main()
{

    int number, sum;
    printf("--The program will give you the sum of a digit--\n Enter your number here: ");
    scanf("%d", &number);

    while (number > 0){
        sum = 0;
        while (number > 0)
        {
            sum = sum + (number % 10);
            number = number / 10;
        }

        if (sum > 9)
        {
            number = sum;
        }
    }
    printf("Your sum of digits to single digit is: %d", sum);
    return 0;
}



/*
sum of digits of the given number
 up to single digit

 982 = 9 + 8 + 2
 = 19

 19 = 1 + 9
 =10

 10 = 1 + 0
 = 1

*/
