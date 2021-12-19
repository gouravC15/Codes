#include"stdio.h"
#include<limits.h>
#include<time.h>

int main(){
     //unsigned int min = UINT_MIN;
     //unsigned int max = UINT_MAX;
    
     int imin = INT_MIN;
     int imax = INT_MAX;

     int umin=0;
     int umax = UINT_MAX;
     
    //printf("%u upto %u",imin, imax);
    
    printf("\n INT %d upto %d",imin, imax);

    printf("\n Unsigned INT %u upto %u",umin, umax);

    int num;
    printf("\nEnter Num: ");
    scanf("&d",num);


    return 0;
}