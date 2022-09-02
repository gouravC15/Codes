/*
when row num = 5
        *
      * *
    * * *
  * * * *
* * * * *             
                                                                  */

#include <stdio.h>
int main()
{
    int num;
    printf("To print Left * pattern\nEnter number of rows: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j <= num; j++)          //prints spaces as inverted L triangle
        {
            printf("  ");                       //changing this (" ")...
        }

        for (int k = 1; k <=i; k++)             
        {
            printf(" *");                       //.. & changing this space ("* ") changes patter.
        }   
        printf("\n");
    }
    return 0;
}