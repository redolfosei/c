#include <stdio.h>

int main() {
    int a = 10; 
    int b,c;

    b = a++; // a should be incremented after the substitution; 
    printf("b is %d \n a is %d",b,a);
}
