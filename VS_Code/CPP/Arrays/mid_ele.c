/*
Finding mid element of array 

a[]={1,8,4,6,7,2,4};

Mid = 6
*/

#include<stdio.h>
int main(){

    int a[]={1,8,4,6,7,2,4};
    int LenOfArray;

    LenOfArray = sizeof(a)/sizeof(a[0]);

    int mid = LenOfArray / 2;

    mid = a[mid];

    printf("Middle element of array is:%d",mid);
}