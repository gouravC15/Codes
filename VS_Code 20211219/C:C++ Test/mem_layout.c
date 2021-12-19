#include<stdio.h>

static int a1=1;
static int a1;

int main(){
static int a1;
printf("%d\n",a1);


        int a = 1, b = 1, d = 1;
        printf("%d, %d, %d", ++a + ++a+a++, a++ + ++b, ++d + d++ + a++);

return 0;
}