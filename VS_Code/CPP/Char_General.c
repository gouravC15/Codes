#include<stdio.h>
int main(){
    //printf("%d\n",sizeof(double));

    printf("%d",printf("%d\t",printf("%s","Hello Ganesh")));

    printf("\nC","Hello","World");
    printf("\n");

    printf(1+"%d");
    printf(1+"%c");
    printf("\n");

    printf(3+"Nagpur\n");     //number denotes how many characters are to be skipped

    float x=0.1;
    if(x==0.1)
        {
            printf("if");
        }
    else if (x==0.1f)
        {
            printf("else if");
        }
    else
        {
            printf("else");
        }

    return 0;
}