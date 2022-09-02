#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two number as X Y:  ");
    scanf("%d  %d",&x,&y);

    while(y!=0){
        x++;
        y--;
    }
    printf("Addition of X and Y =%d",x);
return 0;
}

/*
#include <stdio.h>
int main()
{
    // addition without +
    int a=6 ,b=4;
    for (int i = 0; i <b; i++)
    {
        a++;
    }
    printf("%d",a);
    return 0;
}
*/