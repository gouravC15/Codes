#include<stdio.h>
int main(){

    int i=1024;

    for (; i; i >>= 1)
        printf("Hello AI ...i=%d\n",i);


//HOW MANY TIMES " Hi " WILL BE PRINTED?
    int j=0;
    for (printf("one\n");j<3&&printf(""); j++)      //printf("") returns 0 as nothing is printed so condition will be false
    {
        printf("Hi\n");
    }
    

    return 0;
    
}