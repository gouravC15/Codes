#include<stdio.h>
#define val 20
int main(){
    int a1=2 , a2=a1;
    int b1=2 , b2=b1;//val1=1;
    int ai=a1++, ia=++a2;
    int bd=b1--, db=--b2;
    printf("\n a=2 : a++ is %d, a=2 : ++a is %d",ai,ia);
    printf("\n b=2 : b-- is %d, b=2 : --b is %d \n",bd,db);

    printf("a++++b= %d", a1+++b1);
    return 0;
}