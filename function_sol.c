#include<stdio.h>

int sum(int a,int b);
int subtraction(int a,int b);
int product(int a,int b);
int div(int a,int b);

int main()
{
    int x,y;
    printf("inter number\n");
    scanf("%d %d",&x,&y);
    printf("sum of the numbers is %d\n",sum(x,y));
    printf("diff  of the numbers is %d\n",subtraction(x,y));
    printf("multiply of the numbers is %d\n",product(x,y));
    printf("divion of the numbers is %d\n",div(x,y));
    return 0;
}
int sum(int a,int b){
    return a+b;
}
int subtraction(int a,int b){
    return a-b;
}
int product(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}