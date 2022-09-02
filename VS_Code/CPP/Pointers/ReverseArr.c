/*
Printing reverse array using POINTERS

a[]={1,8,4,6,7,2,4};
Reverse using POINTERS = 4,2,7,6,4,8,1
*/

#include<stdio.h>
int main(){

    int total_ele, reverse;
    printf("Enter Total ELEMENTs of array: ");
    scanf("%d",&total_ele);

    int a[total_ele];
    for (int i = 0; i < total_ele; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    int *p;
    printf("\n Reverse= ");
    for ( p = &a[total_ele-1]; p >= &a[0]; p--)
    {
        printf("%d, ",*p);
    }
    
}