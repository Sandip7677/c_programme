#include<stdio.h>
int main()
{
    int n;
    printf(" input size of triangle \n");
    scanf("%d", &n);
    printf("\n");
    for (int i = n; i >= 1; i--)
    {
    printf("\n                          ");
        for (int j = 1; j <= n; j++)
        {
            if (j<=n-i)
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