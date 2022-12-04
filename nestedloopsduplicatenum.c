#include <stdio.h>

int main () {
   
    int n;

    printf("Enter your number to print here: "); 
    scanf("%d",&n);

    for (int c = 1; c <= n; c++){
        for(int r = 1; r <= c; ++r){
            printf("%d",c);
        }
        printf("\n");
    }

    return 0;
}
