#include<stdio.h>

int fac(int a){
    int res=1;
    for (int i = a; i >=1; i--)
    {
        res=res*i;
    }
    return res;
}
int main()
{
    int n;
    printf("inpurt a number whose factoraial you want to calculate \n");
    scanf("%d",&n);
    printf("factorial of %d is:- %d",n,fac(n));
    return 0;
}