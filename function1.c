#include <stdio.h>

int big(int x, int y){
    if (x > y){
        return x;
    } else {
        return y;
    }
}

int main(){ 
    int collectFunctioon = big(10, 7);
    printf("this is the greater number: %d", collectFunctioon); 
    return 0;
}