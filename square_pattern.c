#include<stdio.h>
int main()
{
    int n;
    printf("input size of square \n");
    scanf("%d",&n);
     for (int i = 0; i < n; i++)
    {
        // printf("                ");
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}