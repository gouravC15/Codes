//WAP to print sum of 1st 10 natural numbers
#include<stdio.h>
int main(){
    int i=1,sum=0;

    while (i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of first 10 Natural Nos= %d",sum);

    return 0;

}