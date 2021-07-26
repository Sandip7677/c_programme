#include<stdio.h>

int main(){
    int n;
    printf("input size of your pattern\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int inc=0,dec=0;
        for (int j = 1; j <= n+i; j++)
        {
            if (j<n-i)
            {
                printf("  ");
            }
            else if(j>=n-i && j<=n)
            {
                printf(" %c",65+inc);
                inc++;
                dec=inc-2;
            }
            else
            {
                printf(" %c",65+dec);
                dec--;
            }
        }
        printf("\n");
    }
    
    return 0;
}