
/* Strong Number: is a number in which The sum of factorial of individual digit of a number
 is equal to the original number
Number = 145
145 = 1! + 4! + 5!
So, 145 = 145 -> Its STRONG
*/
#include <stdio.h>
int main()
{
    int num, result = 0, rem;
    printf("Enter a Num: ");
    scanf("%d", &num);

    int q = num, fact;

    while (q != 0)
    {
        rem = q % 10; // rem stores last dig of num.
        fact = 1;     // need to reset fact for each digit in every iteration.
        printf("\nFact of %d = ", rem);
        while (rem != 0) // calculates factorial for each dig.
        {
            fact = fact * rem;
            rem--;
        }
        printf("%d", fact);
        result = result + fact; // adds new factorial with previous.
        q = q / 10;
    }
    (result == num) ? printf("[\nNum = %d, result=%d \nArmStrong]", num, result) : printf("[num = %d, result=%d \nNot ArmStrong]", num, result);

    return 0;
}