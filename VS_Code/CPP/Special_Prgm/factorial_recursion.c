#include <stdio.h>
    // Factorial using RECURSION
int factorial(int n)
{
    if (n == 0 || n == 1) // base condtion
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int i, n, fact = 1, ch;
    printf("\n[i/p] Enter a number to find its FACTORIAL, n:  ");
    scanf("%d", &n);
    // Factorial using Iteration
    if (n == 0 || n == 1)
    {
        printf("[o/p] Factorial = 1");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("[o/p] Iteration Factorial = %d ", fact);
    }
    // Factorial using RECURSION
    printf("\n[o/p] Recursion Factorial = %d ", factorial(n));
    return 0;
}
