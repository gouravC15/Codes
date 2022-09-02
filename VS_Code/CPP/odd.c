//Print all ** ODD ** numbers from 1 to 20

#include<stdio.h>
/*
int main(){

int i=1;
while (i<=20)                   // <= will run till 20 iteration,   < will run till 19 iteration
{
    if((i%2)!=0){
        printf("%d\t",i);
    }
    i++;
}

return 0;
}

*/ //USING GOR LOOP

int main(){

    int i;
    for(i=1;i<=20;i++){
        if(i%2!=0)
            printf("%d \t",i);
    }

return 0;    
}