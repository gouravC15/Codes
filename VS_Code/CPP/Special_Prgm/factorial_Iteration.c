//WAP to print fact of num

#include <stdio.h>
int main()
{
    int fact = 1, num;

    printf("(input)\nEnter a no. to find factorial: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        int i = 1;
        while (i <= num)
        {
            fact = fact * i;
            i++;
        }
        printf("Factorial = %d", fact);
    }
    else                    //.........for negative numbers.........
    {
        int i = -1;
        while (i >= num)
        {
            fact = fact * i;
            i--;
        }
        printf("Factorial = %d", fact);
    }

    return 0;
}