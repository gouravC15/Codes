#include<stdio.h>
int main(){
    printf("\t%d\n",printf("%s","Hello Mac")); //prints char count in string
    printf("%10s","Hello");//prints hello after 5 blank spaces upto 10places

    unsigned i=1;
    int j=-4;
    printf("\n%u\n",i+j);//converts -3 into 2s complement and print the subtracted val from max range of U_INT

    return 0;
}