/*
Finding mid element of array 

a[]={1,8,4,6,7,2,4};

Mid = 6
*/

/*
Finding mid element of array using POINTERS

a[]={1,8,4,6,7,2,4};

Mid = 6
*/

int *findMid(int arr[],int len){                      //datatype * tells that we are returning address of int type
        return &arr[len/2];
}

#include<stdio.h>
int main(){

    int a[]={1,8,4,6,7,2,4}, *mid_ele_address_ptr;
    int LenOfArray; 

    LenOfArray = sizeof(a)/sizeof(a[0]);

    int *mid;
    mid = findMid(a, LenOfArray);                     //pointer mid will receive address of findMid()

    printf("Middle element of array is: %d\n",*mid); //content stored in loctn pointed by mid

    mid_ele_address_ptr = &a[LenOfArray/2];
     printf("\nAddress of a[LenOfArray/2] = %d\n",mid_ele_address_ptr);
     printf("Content of a[LenOfArray/2] = %d\n",*mid_ele_address_ptr);
    printf("Address of findMid() = %d\n",mid);
    printf("Content of findMid() = %d\n",*mid);
}