// Read a char and display if it is a vowel or not

#include <stdio.h>
int main()
{
    char ch;
    printf("[ip] Enter a char to check if it is a VOWEL or CONSONANT! :  ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("[op] %c is VOWEL", ch);
    }
    else{
        printf("[op] %c is CONSONANT", ch);
    }

    (2000%100!=0)?printf("is leap"):printf("0");
    return 0;
}