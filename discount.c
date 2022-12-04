#include <stdio.h> 

int main() {
    double quantity, ratePerItem, amount; 

    printf("Enter rate per unit: ");
    scanf("%lf",&ratePerItem); 

    printf("Enter the quantity: ");
    scanf("%lf",&quantity);

    amount = quantity * ratePerItem; 

    if(amount > 500) 
        amount = amount * 0.9;

    printf(" calculated amount %lf\n", amount);

    return (0);    
}


/* 
Accept quantity and rate per item, Calculate the amount. 
Apply 10% discount if amount exceeds 500 and display the net price;
*/
