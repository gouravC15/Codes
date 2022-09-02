
/*
num of rows = 0      1      2     3     4     5      n=6
Fibonacci(n)= 0      1      1     2     3     5      
      (a,b) =(0+0) (0+1)  (0+1) (1+1) (1+2) (2+3)
*/

#include<stdio.h>
int main(){
    int num,i,a=0,b=1,result;

    printf("Enter a number to print FIBONACCI series from 0 to n:  ");
    scanf("%d",&num);

    for (i=0; i <num; i++)
    {   
        printf("%d",a);
        result = a + b;
        a=b;
        b = result;
    }
    return 0;
}