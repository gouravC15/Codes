/*
WAP to print numbers from 1 to N such that if the number is odd then add 1 to it and if a number is even subtract 1 from it
*/
#include<stdio.h>
void odd();
void even();

int n=1;

int main(){

    printf("Program to print numbers from 1 to 10 such that if the number is ODD then add 1 to it and if a number is EVEN subtract 1 from it\n[OUTPUT] ");
    odd();
}

void odd(){
    if (n<=10)
    {
        printf("%d ",n+1);
        n++;
        even();
    }
    return;
}

void even(){
    if (n<=10)
    {
        printf("%d ",n-1);
        n++;
        odd();
    }
    return;
}