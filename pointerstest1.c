#include <stdio.h>

/**
* p holds the address of a so they basically will print the 
* same stuff. 
*/

int main(void)
{

  int a = 5;
  int *p;
  p = &a;

  printf("%i\n",a);
  printf("%p\n",&a);
  printf("%p",p);

  return (0);
}
