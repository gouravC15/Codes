/*
WAP to that reads a 5*5 array of integers and then prints the row sum and column sum:

[Input]
        Enter row 1: 8 3 9 0 10
        Enter row 2: 3 5 17 1 1
        Enter row 3: 2 8 6 23 1
        Enter row 4: 15 7 3 2 9
        Enter row 5: 6 14 2 6 0

[Output]
        Row total:
        Column total:

*/
#include <stdio.h>
#define R 3
#define C 3
int main()
{

        int a[R][C] = {{1, 2, 3}, {1, 2, 1}, {3, 1, 2}};//{{1, 2, 3}, {1, 2, 1}, {3, 1, 2}};
        int b[R][C] = {{1, 2, 3}, {1, 2, 1}, {3, 1, 2}}, result[R][C] = {0};
        int i, j, sum = 0;

        printf("[Input]\nEnter 2 matrix to prints the MATRIX MULTIPLICATION\nMatrix [1]:\n");

        for (int i = 0; i < R; i++)
        {
                printf("        Enter Row %d: ", i + 1);
                for (int j = 0; j < C; j++)
                {
                        scanf("%d", &a[i][j]);
                }
                printf("\n");
        }

        printf("\nMatrix [2]:\n");
                for (int i = 0; i < R; i++)
        {
                printf("        Enter Row %d: ", i + 1);
                for (int j = 0; j < C; j++)
                {
                        scanf("%d", &b[i][j]);
                }
                printf("\n");
        }

        // Calculating Multiplication
        printf("\n[Output]\nMultiplication = ");
        for (i = 0; i < R; i++)
        {
                for (j = 0; j < C; j++)
                {
                        for (int k = 0; k < R; k++)
                        {
                                sum += a[i][k] * b[k][j];
                        }

                        result[i][j] = sum;
                        sum = 0;
                        printf("%d\t", result[i][j]);
                }

                printf("\n\t\t");
        }

        return 0;
}