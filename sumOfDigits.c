#include <stdio.h>

int main() {
    int n,sum = 0;

    printf("Enter a number here: "); 
    scanf("%d", &n);

    while (n > 0){
        sum = sum + (n % 10);
        n = n / 10; 
    }
     

    printf("sum of digits is: %d", sum); 
}



/* 
    sum of digits of the given number; 
    982 = 9 + 8 + 2 
    = 19; 
*/