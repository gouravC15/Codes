/*  WAP to print hollow frame pattern from row num user i/p
******
*    *
*    *
*    *
*    *
******
*/
#include<stdio.h>
#define RED     "\033[31m"      /* Red */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define RESET   "\033[0m"

int main(){

    int row_no,i,j;

    printf("%s(Input) ",RED);
    printf(RESET);
    printf("Enter Num of rows: ");
    scanf("%d",&row_no);
    printf("%s(output):\n",YELLOW);
    printf(RESET);

    for(i=1;i<=row_no;i++){
        for(j=1;j<=row_no;j++){

            if((i==1||i==row_no)||(j==1||j==row_no)){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
printf("\n");
    return 0;
}