#include <stdio.h>
int main()
{

    int n, i, divisors, div_sum;
    printf("[Input] To check if a number is PERFECT enter a number: ");
    scanf("%d", &n);

    printf("[1] Divisors = ");

    divisors = 1;
    div_sum = 0;

    while (divisors < n && n != 0)
    {

        if (n % divisors == 0)
        {
            printf("%d,", divisors);
            div_sum = div_sum + divisors;
        }

        divisors++;
    }

    printf("\n[2] Sum of divisors = %d\n[Output] ", div_sum);
    div_sum == n?printf("%d is PERFECT NUMBER as %d = %d ",n,n,div_sum):printf("%d is NOT a PERFECT NUMBER as %d != %d",n,n,div_sum);

    return 0;
}

/*
    Check if a number is perfect number or not

#include <stdio.h>
int main()
{   
    int num,i=1,divisors_sum=0;
    printf("[Input] Enter a number to Check if a number is perfect number or not?\n   Number: ");
    scanf("%d",&num);

    // finding +ve divisors/factors
    printf("   Perfect Divisors = ");
    while (i<num)
    {   
        if (num%i==0)
        {
        printf("%d, ",i);
        divisors_sum = divisors_sum+i;
        }
        i++;
    }
    printf("\n   Divisors_sum = %d for %d\n",divisors_sum,num);

    (divisors_sum==num)?printf("[Output] Its PERFECT NUMBER"):printf("[Output] Its NOT PERFECT NUMBER");

    
    return 0;
}
*/