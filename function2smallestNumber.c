#include <stdio.h>

int smallestNumber (int a,int b){
  if (a < b)
    return a;
  else 
    return b;
}

int main () {

  int a,b,c;
  //collect input from user
  printf("Enter a first number here: ");
  scanf("%d", &a);

  printf("Enter a second number here: ");
  scanf("%d", &b);

  printf("Enter a third number here: ");
  scanf("%d", &c);

  int smallestn = smallestNumber(a, smallestNumber(b,c));

  printf("The smallest number is: %d", smallestn);


  return 0;
}









// #include <stdio.h> 
//
// int smallestNumber(int a, int b){
//   if(a < b)
//     return a;
//   else 
//     return b;
//       
//     
// }
//
// int main(){
//     int smallestn = smallestNumber(10, smallestNumber(12,9)); /*function inside func*/
//     printf("The smallest among the three is: %d", smallestn); 
//     return 0; 
// }
//


