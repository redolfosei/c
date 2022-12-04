#include <stdio.h>

int main()
{

    printf(" --- This program prints the sums of a squared number: --- ");

    int n;
    int sum = 0;

        while (n != 0){
            printf("\n Enter your number here: ");
            scanf("%d", &n);

            if(n == 0){
                break;
            }
           sum += n*n;
           printf("%d",sum); 
        }
 
    return 0;
}
