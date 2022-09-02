// PRIME or COMPOSITE

#include <stdio.h>
int main()
{

    int i = 1, num, factors_count = 0;

    printf("[Input] Enter a number to check its PRIME or NOT: ");
    scanf("%d", &num);
    //Counting Factors
    (num==0)?printf("Factors of 0 = 0"):printf("     \tFactors: ");
    while (i <= num) // i will charge from 1 upto n
    {  
        if(num % i == 0)
        { // if remainder for each num divided by i shoulb be 0
            printf("%d, ", i);
            factors_count++;
        }
        i++;
    }
    // printf("Count = %d\n",count);
    (factors_count<=2 && num>1) ? printf("\n[output] %d is Prime", num) : printf("\n[output] %d is not Prime", num);
    return 0;
}

/*
#include <stdio.h>
int main()
{
    int num, total_factors;
    printf("Enter a Num: ");
    scanf("%d", &num);

    printf("Factors of %d =", num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf(" %d,", i);
            total_factors++;
        }
    }
    (total_factors == 2) ? printf("\n-> Prime") : (num > 1) ? printf("\n-> Composite")
                                                            : printf("[?] Enter valid number");
}
*/