#include <stdio.h>

int main() {

    int n,fact = 1;
    printf(" Enter your number here: "); 
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("factorial of %d is %d",n,fact);

    return (0);
}

/* 
Find N! (i.e N factorial)
1x2x3x...xN;
*/