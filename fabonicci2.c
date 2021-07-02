#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int fab[n+2];
    fab[0]=0;
    fab[1]=1;
    for (i = 2; i <=n ; i++)
    {
        fab[i]=fab[i-1]+fab[i-2];
    }
    printf("%d",fab[i-1]);
    return 0;
}