/*
when row num = 5

* * * * *  
* * * *
* * *
* *
*                                                                          */

#include <stdio.h>
int main()
{
    int num;
    printf("To print Left * pattern\nEnter number of rows: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        for (int j =i; j <= num; j++)           //j should print from current i to 5
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}