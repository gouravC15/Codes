//space separated string using scanf

#include<stdio.h>
int main(){
    char input[10], input2[20];
    printf("[1]Enter a string with space: ");
    scanf("%s",&input);

    printf("Output 1: %s",input);     // will only print 1st string and avoid everything after _space_

    printf("\n[2]Enter 2nd string with space: ");
    scanf("%[^\n]%*c",&input2);
    printf("Output 2: %s",input2);
    return 0;
}