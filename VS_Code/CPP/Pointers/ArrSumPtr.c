/*
Finding sum of element of array using POINTERS

a[]={1,8,4,6,7,2,4};
sum using ptr = 32
*/

#include<stdio.h>
int main(){

    int a[]={1,8,4,6,7,2,4};
    int *p= &a[0], sum=0, LOA;

    LOA = sizeof(a)/sizeof(a[0]); //Len Of Array

    for (int i = 0; i < LOA ; i++)
    {
        sum = sum + *(p+i);  //adding i into &a[0]...&a[i]
    }
    printf("%d",sum);
    /*.................OR.................
    
    for (int p = &a[0]; p <= &a[6] ; p++)
    {
        sum += *p;
    }
    printf("Sum of Array using ptr = %d",sum);
    */
}