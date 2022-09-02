#include <stdio.h>
int main()
{
    // power of int
    int base, pow, result = 1;

    printf("\n Enter BASE(_) and its POWER(^): ");
    scanf("%d %d", &base, &pow);
    int entered_pow = pow; // to store original power for printing

    if (pow > 0)
    {
        while (pow != 0)
        {
            result = result * base;
            pow--;
        }
        printf("%d to power %d = %d", base, entered_pow, result);
    }

    // for negative power
    else if (pow < 0)
    {
        double result_neg = 1.0;
        while (pow != 0)
        {
            result_neg = result_neg * (1.0 / base);
            pow++;
        }
        printf("%d to power %d = %.10f", base, entered_pow, result_neg);
    }

    else
    {
        printf("%d to power %d = %d", base, entered_pow, result);
    }
}