#include<stdio.h>
int main(){
    int total_rows,col;
    int n=1;        //depecting start of natural numbers which we need to print.

    printf("\nEnter num of rows to print FLYOD's Triangle:  ");
    scanf("%d",&total_rows);
    for (int row = 1; row<=total_rows; row++)
    {
        for (int col = 1; col <=row; col++)
        {   
            printf("%d ",n);
            n++;
        }
    printf("\n");
    }
    return 0;
}