#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number to print here: ");
    scanf("%d", &n);

    for (int col = 1; col <= n; col++){
      for (int row = 1; row <= col; row++){ 
           printf("%d",row); 
        }
        printf("\n");
    }
   
     return 0;
}

/*
Nested Loops 
1
12
123
1234
12345
  */
