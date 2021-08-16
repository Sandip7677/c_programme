#include<stdio.h>
int main()
{
    int n;
    printf(" input size of triangle \n");
    scanf("%d", &n);
    printf("\n");
    for (int i = 1; i <= n; i++)                                              
    {
    printf("\n                          ");                                     
        for (int j = 1; j <= i; j++)
        {
            if (j<= n-i)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
    printf("\n");
    }
    return 0;
}