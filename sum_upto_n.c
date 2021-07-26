#include<stdio.h>

int main(){
    int n,sum=0;
    printf("input the number upto which you want to calculate sum\n");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("sum upto %d is :- %d",n,sum);
    return 0;
}