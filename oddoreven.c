#include <stdio.h> 

/*this is the comement to deal wit*/

int main() {

  int f; 

    printf("Enter a number greater than 0: ");
    scanf("%d",&f);

    printf("The results is %s"),f,(f % 2) ? "Number is Even" : "Number is odd";

    return (0); 

}
