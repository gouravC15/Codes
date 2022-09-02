/*

*/
#include <stdio.h>
int main()
{
    static int a=5;
     int *ptr;
     ptr = &a;

    printf("%d",*ptr);
    return 0;
}