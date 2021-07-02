#include<stdio.h>

int main(){
    int a,b,c;
    printf("input three intrger values \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("result of the expression is %d \n",a%b%(c%a));
    return 0;
}