#include <stdio.h>
#include<string.h>

int main()
{
    int m1, n1, m2, n2;
    printf("input row and colon of the matrix 1 \n");
    scanf("%d %d", &m1, &n1);
    printf("input row and colon of the matrix 2 \n");
    scanf("%d %d", &m2, &n2);
    int matrix1[m1][n1];
    int matrix2[m2][n2];
    if (n1 == m2)
    {
        int resultant_matrix[m1][n2]={0,0};
        // memset(resultant_matrix,0,m1*n2*sizeof(resultant_matrix[0][0]));
        printf("input number in matrix 1 of order %d x %d\n", m1, n1);
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("matrix 1 is :\n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("%d  ", matrix1[i][j]);
            }
            printf("\n");
        }

        printf("input number in matrix 2 of order %d x %d\n", m2, n2);
        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }
        printf("matrix 2 is :\n");
        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("%d  ", matrix2[i][j]);
            }
            printf("\n");
        }

        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                for (int k = 0; k < n1; k++)
                {
                    resultant_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        printf("resultant matrix is \n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("%d  ", resultant_matrix[i][j]);
            }
            printf(" \n");
        }
    }
    else
    {
        printf("matrices are not compatible for multiplication \n");
    }
    return 0;
}