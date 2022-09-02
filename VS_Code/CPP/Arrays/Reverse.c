/*
WAP to reverse a series of number
34 56 54 32 67 89 90 32 21 
            as
21 32 90 89 67 32 54 56 34 asssume numbers are elements of an array
*/
#include <stdio.h>

int main(){
    int arr[9]= {34,56,54,32,67,89,90,32,21};

    printf("[i/p] Elements in array are: ");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }

printf("\n[o/p] Reversed elements are: ");
    
    for (int i = 8; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}
