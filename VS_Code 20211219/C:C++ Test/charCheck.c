#include<stdio.h>
int main(){

    char iamNum = 65;
    printf("%c \n", iamNum); //prints A as A=65

    char iamNum2 = 127;      //printable chars range is 33-126 >>exceeding this will perform cycle
    printf("%c \n", iamNum2);

    char iamNum3 = -128;    //each -ve = some +ve value a
    printf("%c \n", iamNum3);

    char iamChar = 'He';     //char holds single char at a time, only last char will be printed if here are too many
    printf("%c \n", iamChar);

    return 0;
}