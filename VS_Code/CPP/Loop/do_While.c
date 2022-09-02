
// Program to Print Numbers Range
#include <stdio.h>
int main()
{
    int start_num, end_num;

    printf("Enter Starting Num: ");
    scanf("%d", &start_num);
    printf("Enter Ending Num: ");
    scanf("%d", &end_num);
    printf("Output :: ");

    if (start_num <= end_num)
    {
        do
        {
            printf(" %d", start_num);
            start_num++;
        } while (start_num <= end_num);
    }
    else // if start is > end num
    {
        do
        {
            printf(" %d", start_num);
            start_num--;
        } while (start_num >= end_num);
    }

    return 0;
}