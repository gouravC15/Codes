/*

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Total elements to be in an array: ");
    scanf("%d",&n);
    int a[n];
    //input
    for (int i=0; i<n; i++){
        printf("Enter %d element: ",i+1);
         scanf("%d",&a[i]);
    }
    
    printf("\nElements are: ");
    for (int i=0; i<n; i++){
        printf("%d, ",a[i]);
    }

    //calculating min and max element in an array
    int min,max;
    min=max=a[0];

    for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                    if (a[i]<a[j]&&a[j]>=max){
                            max=a[j];
                    }
                    else if (a[i]<a[j]&&a[i]<min){
                            min=a[i];
                    }
            }
    }
    printf("\nMax = %d, Min = %d",max,min);
    return 0;
}