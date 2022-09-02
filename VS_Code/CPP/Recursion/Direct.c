/*
SUM USING RECURSION from 1 to N

sum(0)=0;
sum(1)=1+0;
sum(2)=2+1+0;
sum(3)=3+2+1+0;
sum(n)=n+sum(n-1); //RECURSIVE Process
*/

#include<stdio.h>
int sum(int);

int main(){
    int n;
    printf("Enter a number to get sum from 1 to N, N= ");
    scanf("%d",&n);
    printf("\nSum of 1 to %d = %d",n,sum(n));
    return 0;
}

int sum(int n){
    if(n == 0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}
