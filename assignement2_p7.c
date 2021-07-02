#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("input four integer values \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("result of the expression is %d ",a++*d-c&a^d/(b++%b));
    return 0;
}