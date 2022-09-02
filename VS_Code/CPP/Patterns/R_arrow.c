/*
Print the below pattern
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/

#include <stdio.h>
void main()
{

    int n = 5;

    for (int row = 1; row <= (2 * n) - 1; row++)
    {
        if (row <= n)
        {
            for (int col = 1; col <= row; col++)
            {
                printf("* ");
            } // inner loop END
            printf("\n");
        }

        else
        {
            for ( int j=1; j<=(2*n)-row; j++)               //r=6, n=5, j=1
            {
                printf("* ");
            }
            printf("\n");
        }
    } // outer loop END
}


/*
              OR (using 4 loops)

Print the below pattern
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
                                        

#include<stdio.h>
void main(){

    int n=5;

    for (int row = 1; row <=n; row++)
    {
        for (int col = 1; col <=row; col++)
        {
            printf("* ");
        }//inner loop END
        printf("\n");
    }
    
    for (int r =1; r <= n-1; r++)
    {
        for (int c = 1; c <=n-r ; c++)
        {
            printf("* ");
        }
        printf("\n");
    }//outer loop END
    
}

*/