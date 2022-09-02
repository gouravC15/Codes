#include<stdio.h>

int main()
{
    int original,num, last_dig = 0, result = 0;

    printf("(input)\nEnter a num to check if it is or its STRONG: ");
    scanf("%d",&num);
    original=num;
    while (num > 0)
    {
        last_dig = num % 10;
        printf("%d ", last_dig);
        num = (num - last_dig) / 10;

        int i = 1, fact = 1;
        while (i <= last_dig)
        {
            fact = fact * i;
            i++;
        }
        printf("Factorial = %d\n", fact);
        result = result + fact;
    }
    printf("\nOriginal: %d | Result: %d | ",original, result);
    if(result==original){
        printf("STRONG");
    }
    else{
        printf("NOT-STRONG");
    }
    return 0;
}