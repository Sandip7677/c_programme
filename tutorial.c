#include<stdio.h>
int main()
{
    int ar[2][3]={4,5,7,3};
    int *ptr=&ar[1][2];
    printf("%d\n",ar[0][0]);
    printf("%d\n",ar[0][1]);
    printf("%d\n",ar[0][2]);
    printf("%d\n",ar[1][0]);
    printf("%d\n",ar[1][1]);
    printf("%d\n",ar[1][2]);

    printf("%d",*(*(ar+0)+0));
    printf("%d",*(*(ar+0)+1));
    printf("%d",*(*(ar+0)+2));
    printf("%d",*(*(ar+1)+0));
    printf("%d",*(*(ar+1)+1));
    printf("%d/n",*(*(ar+1)+2));
    printf("%d",*ptr);
    return 0;
}