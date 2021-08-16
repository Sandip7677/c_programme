#include<stdio.h>

int main(){
    int n;
    printf("input the number upto which you want to find sum\n");
    scanf("%d",&n);
    int sum =0;
    sum=(n*(n+1))/2;
    printf("sum upto %d is :- %d",n,sum);
    return 0;
}