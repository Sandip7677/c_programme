#include <stdio.h>
int main()
{
    int n;
    printf("input length for your pattern\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j <= n - i || j >= n + i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}