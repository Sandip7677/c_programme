#include <stdio.h>

int main()
{
    int m, n;
    printf("input row and colon of your matrix \n");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    int matrix_tans[n][m];
    printf("input number in matrix  of order %d x %d\n", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix_tans[i][j]=matrix[j][i];
        }
    }
    printf("transpose of the matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            printf("%d  ", matrix_tans[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}