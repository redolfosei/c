#include <stdio.h>

/**
* _swapit - This function swaps two numbers. 
* @num1: first number to be swapped.
* @num2: second number to be swapped. 
*/

void _swapit(int num1, int num2)
{
 int temp; 

  printf("Num1 before swap is %d: \n", num1);
  printf("Num2 before swap is %d: \n", num2);
  //num1 = 19;
  //num2 = 21;

  temp = num1;
  num1 = num2;
  num2 = temp; 

  printf("Num1 after swap is %d: \n", num1);
  printf("Num2 after swap is %d: \n", num2);
}

int main(void)
{
  _swapit(100,209);
  return 0;
}
