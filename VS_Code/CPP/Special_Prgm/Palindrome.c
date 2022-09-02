//if num is palindrome     4554, 1221, 0002000 are plandrome

#include <stdio.h>
int main()
{
    int number, result=0, quotient, remainder;

    printf("Enter number to check it is palindrome or not: ");
    scanf("%d",&number);

    quotient = number;

    while (quotient != 0)
    {
        remainder = quotient%10;         //gives last digit of number
        result = result * 10 + remainder;
        quotient = quotient / 10;
    }
    
    (result == number)?printf("Number= %d \nReverse= %d is Palindrome\n",number,result):printf("Number= %d \nReverse= %d is not a palindrome\n",number,result);
    
return 0;
}



