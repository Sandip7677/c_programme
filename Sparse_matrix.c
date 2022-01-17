#include <stdio.h>
int main(){
    int m, n;
    printf("input row and colon of your matrix \n");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("input number in matrix  of order %d x %d\n", m, n);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int count =0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if(matrix[i][j]==0)
                count++;
        }
    }
    if(count >= (m*n)/2){
        printf("Given matrix is sparse matrix \n");
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                printf("%d ",matrix[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Given matrix is not sparse matrix");
    return 0;
}