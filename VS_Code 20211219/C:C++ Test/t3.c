#include<stdio.h>
#include<limits.h>
int count;
int inc(){
    count=count+1;
    return count;
}
int main(){
    int val;
    val=inc();
    printf("%d",val);
    val=inc();
    printf("\n%d",val);

    //Bitwise operators:
    unsigned int n=7,m=4;
    printf("\n 7&4= %d",n&m);
    printf("\n 7|4= %d",n|m);
    printf("\n ~7= %d",~n);
        printf("\n 1&2= %d",1&2);

}