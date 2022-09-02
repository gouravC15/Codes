//WAP to allow user to enter numbers until 0 or -ve num is entered
#include<stdio.h>
int main(){

    int num,i;

    for(i=1;num>=1;i++){
        printf("Enter a number: ");
        scanf("%d",&num);
    }
    printf("Entered Number < 1");

    return 0;
}
/*                      ----------------------------- OR ----------------------------
int main(){

    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num != 0){
        if(num<0)
            break;

        printf("Enter a Number: ");
        scanf("%d",&num);
    }
    return 0;
}
*/