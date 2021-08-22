#include<stdio.h>

void fabonnici(int n);

int main(){
    int n;
    printf("input a number to claculate fabonnici series upto that number\n");
    scanf("%d",&n);
    printf("fabboni series:- \n");
    fabonnici(n);
    return 0;
}

void fabonnici(int n){
    int a=0,b=1,c;
    printf("%d \n",a);
    printf("%d \n",b);
    
    for (int i = 2; i < n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    printf("%d \n",c);
    }
    
}