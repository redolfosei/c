#include <stdio.h>

/**
 * main - printing the size, in bytes, of a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
   int n;
   int *p;

   n = 98;
   p = &n;

   printf("Address of 'n': %p\n", &n);
   printf("Value of 'p': %d\n", n); 

   //printf("Size of pointer on my machine: %lu\n", sizeof(p));
   //printf("Address of pointer variable 'p' is %p:\n", &p);

    
   return (0);
}
