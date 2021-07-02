#include<stdio.h>

int fib(int a){
    if(a<=1)
     return a;
    return fib(a-1)+fib(a-2);
}
int main(){
    int n;
    printf("input the numbber upto which place you want to print fabonicci series \n");
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;
}