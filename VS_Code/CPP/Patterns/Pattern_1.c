//  *  * 
//  *  * 

#include<stdio.h>
int main(){
    int i,j;

    for(i=1;i<=2/*ROW*/;i++){
        for(j=1;j<=2/*COLUMN*/;j++){
            printf(" * ");
        }
        printf("\n");               //before incrementing i, ctrl goes to Next Line :: then again J loop is execure
    }

    return 0;
}
