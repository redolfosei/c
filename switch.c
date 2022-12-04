#include <stdio.h> 

int main() {
    int weekday; 

    printf("Enter weekday 0 -> ('Sunday'), 1 -> ('Monday')");
    scanf("%d",&weekday); 

    switch (weekday)
    {
    case 0: 
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
    printf("Wednesday");
        break;
    
    default:
        printf("Invalid Number");
        break;
    }
}


