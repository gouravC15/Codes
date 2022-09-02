/* To print table for the number entered by user:
    n=3
    3x1=3
    3x2=6
    ..
    ...
*/
#include<stdio.h>
int main(){
    int num,end;
    
    printf("Enter a number to print table: ");
    scanf("%d",&num);

    printf("upto: ");
    scanf("%d",&end);

    for (int i = 1; i <=end; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    

    return 0;
}