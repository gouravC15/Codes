
/*
bin2deci = 1001 == 9
*/

#include<stdio.h>
int main(){
    int bin,deci=0,counter,weight=1;

    printf("Enter a BINARY number to print corresponding Decimal val [BINARY]=  ");
    scanf("%d",&bin);

    int rem,binary = bin;
    while (bin!=0)
    {
        rem = bin%10;
        deci = deci +rem*weight;
        bin = bin/10;
        weight = weight*2;
    }
    printf("%d = %d",binary,deci);
    return 0;
}