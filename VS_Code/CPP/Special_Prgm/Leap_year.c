/*
    Check if a YEAR is LEAP yr or not
*/
#include <stdio.h>
int main()
{   
    int year;
    printf("Enter a YEAR to check if its LEAP YEAR or not?\nEnter Year: ");
    scanf("%d",&year);

    if (year%400==0){
        printf("%d is a LEAP YEAR",year);
    }
    else if (year%100==0)
    {
        printf("%d is NOT a LEAP YEAR",year);
    }
    else if (year%4==0)
    {
        printf("%d is a LEAP YEAR",year);
    }
    else
        printf("%d is NOT a LEAP YEAR",year);
    
    return 0;
}