#include<stdio.h>
extern int a;
int var;
int main(){
    int var2;
    printf("global VAR = %d \n local VAR2 = %d",var,var2);
    printf("%d",a);
    return 0;

}