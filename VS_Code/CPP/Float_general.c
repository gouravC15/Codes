#include<stdio.h>
#include<limits.h>


int main(){
    printf("Mac\n");

    int imin= INT_MIN;
    int imax= INT_MIN;

    printf("%d to %d\n",imin, imax);

    //Float
    float fmin= __FLT_MIN__ ;
    float fmax= __FLT_MAX__ ;
    printf("\n%f to %f\n\n",fmin, fmax);

    int f1=4.0/9.0;                 //dtype = int, val=float
    printf("%d\n",f1);

    int f2=4/9;                     //dtype & val =int
    printf("%d\n",f2);              

    float f3=4/9;                   //dtype =flt , val =int
    printf("%.4f\n",f3);

    float f4=4.0/9.0;               //dtype & val =flt          remaining places after 0.44 _ _  will be filled by last dig 44
    printf("%.4f\n\n",f4);
 
 //char
    printf("%c =128 ------ %c =-128 \n",128,-128);
    printf("%c =129 ------ %c =-127 \n\n",129,-127); //each -ve val is equal to some +ve val in EXTENDED ASCII

    printf("%10s","HelloWorld2");

printf("\n%d",sizeof(long double));



    return 0;
}