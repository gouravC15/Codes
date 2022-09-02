#include <stdio.h>
int main()
{
    int first_num, last_num;
    printf("Enter First and Last number num to print the range \nFirst num: ");
    scanf("%d", &first_num);
    printf("Last num: ");
    scanf("%d", &last_num);

    // for F=5, L=10
    if (first_num <= last_num)
    {
        while (first_num <= last_num)
        {
            printf("%d\t", first_num);
            first_num++;
        }
    }
    // for F=10, L=5
    else
    {
        while (first_num >= last_num)
        {
            printf("%d\t", first_num);
            first_num--;
        }
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    
    for (;a>=1&&a<=b;a++) {
    
    if(a<=9){
        if(a==1)
        printf("one\n");
        
        else if(a==2)
        printf("two\n");
        
        else if(a==3)
        printf("three\n");
        
        else if(a==4)
        printf("four\n");
        
        else if(a==5)
        printf("five\n");
        
        else if(a==6)
        printf("six\n");
        
        else if(a==7)
        printf("seven\n");
        
        else if(a==8)
        printf("eight\n");
        
        else if(a==9)
        printf("nine\n");
        
    }
    else if(a>9&&a%2==0){
    printf("even\n");
    }
    else{
        printf("odd\n");
    }
    }

    return 0;
}

