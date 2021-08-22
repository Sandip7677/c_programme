#include<stdio.h>

int calculate(int a,int b,int n){
    if (n==1)
    {
        return a+b;
    }
    else if (n==2)
    {
        return a-b;
    }
    else if (n==3)
    {
        return a*b;
    }
    else if (n==4)
    {
        return a/b;
    }
    else
    {
        printf("invalide input \n");
        return 0;
    }
}

int main(){
    int a,b,n;
    printf("input two number for claculation \n");
    scanf("%d %d",&a,&b);
    printf("input 1 to add 2 to substact 3 to multiply 4 to divide \n");
    scanf("%d",&n);
    if (calculate(a,b,n)!=0)
    {
        printf("result of calculation is %d",calculate(a,b,n));
    }
    return 0;
}