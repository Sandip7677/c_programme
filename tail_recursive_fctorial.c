#include<stdio.h>

int factorial(int n,int result){
    if(n==1 || n==0)
        return result;
    return factorial(n-1,n*result);
}

int main(){
    int n;
    printf("input number to calculate factorial \n");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,factorial(n,1));
}