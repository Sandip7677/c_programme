#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("input 3 integers \n");
    scanf("%d %d %d",&a,&b,&c);
    d=a+b*c+a++-a*b/a;
    printf("vlaue of the expression is %d",d);
    return 0;
}