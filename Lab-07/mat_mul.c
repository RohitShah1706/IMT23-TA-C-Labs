/*
write code to multiply a 3x3 matrix and then print it
*/

#include <stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3];

    printf("Enter the first matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        // printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the second matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        // printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("The product is:\n");
    for (int i = 0; i < 3; i++)
    {
        // printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            mat3[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}