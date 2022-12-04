#include <stdio.h>

int main()
{
    int obtainedMarks, totalMarks;
    float percentage;

    printf("--- This program gives you the percentage of a number --- \n Enter the Obtained marks here: ");
    scanf("%d", &obtainedMarks);

    printf("Enter the total mark here: ");
    scanf("%d", &totalMarks);

    percentage = obtainedMarks * 100.0 / totalMarks;

    printf("The percentage is %.2f", percentage); //this keeps two decimal places;
}