/*   BY CHANGING line 23:
     1          4         4         *
    222        444       345       ***
   33333      44444     23456     *****
  4444444    4444444   1234567   *******
*/

#include<stdio.h>
int main(){
    int i,j,row_num;

    printf("Enter Number of Row [↓] to print pyramid [▲]: ");
    scanf("%d",&row_num);

    for(i=1;i<=row_num;i++)
    {
        for(j=1;j<=(2*row_num);j++)
        {
            if(j>=row_num-(i-1)&&j<=row_num+(i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}



/* MORE CLEAR

Print the below pattern  ' _ ' is space
_ _ _*
_ _* * *
_ * * * * *
* * * * * * *



#include <stdio.h>
int main()
{

    int n = 4;
    // 4 rows , 7 columns means n = rows,    2n-1 = col

for (int row = 1; row <= n; row++)
{
    for (int col = 1; col <= (2*n)-1; col++)
    {
        if(col>=n-(row-1) && col<=n+(row-1)){
            printf(" * ");
        }
        else{
            printf("   ");
        }
        
    }
    printf("\n");
}
}
*/