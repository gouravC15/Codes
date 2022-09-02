/*
WAP to check which elements in an array occurs more than once
i/p: arr[N] = {1, 2, 3, 1, 5, 3};
21 32 90 89 67 32 54 56 34 asssume numbers are elements of an array
*/
#include <stdio.h>
#define N 8
int main()
{

    int arr[N] = {1, 2, 3, 1, 5, 3,0,5},element[]={0};

    printf("[Input]  Elements in array are: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n[Output] Elements Occuring more than once: ");

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N;j++)
        {
            (arr[i] == arr[j])?printf("%d,", arr[i]):0;
        }
    }
    

    return 0;
}
