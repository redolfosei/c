#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter a value and I will multiply it by 5: ");
    scanf("%f", &a);
    printf("Your value entered is: %.1f\n", a);

    b = a * 5;
    printf("Your value multiplied by 5 is: %.1f\n", b);

    b = b / 5;
    printf("Your value divided by 5 is: %.1f", b);
}
