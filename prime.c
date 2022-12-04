#include <stdio.h> 

int main () {

    int n,c,i;
   

    printf("Enter a number to print the prime numbers up to that: ");
    scanf("%d",&n); 
     
    i = 1;
    c = 0; 
    while(i <= n){
        if(n %i == 0 ){
            c++;
        }
        i++;
    }

    printf("%d\n",i);

if(c == 2){
    printf("Prime : %d",n);
} else{
    printf("Not prime: %d",n);
}

}















/*
 * check if a numner is prime or not.
 * A prime number is divisible only by 1 and itself
 eg. 2,3,5,7,11
 * */
