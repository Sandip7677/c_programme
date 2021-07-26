#include <stdio.h>

int main()
{
    int n;
    printf("input number of rows \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; ++j)
        {
            int res = 1;
            int n=i;
            int r=j;
            if (r > n - r)
            {
                r = n - r;
            }
            for (int k = 0; k < r; k++)
            {
                res *= (n - k);
                res /= (k + 1);
            }
            printf("%d ", res);
        }
        printf("\n");
    }

    return 0;
}