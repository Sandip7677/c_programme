#include<stdio.h>

int main(){
    int a,b;
    printf("Input two integers \n");
    scanf("%d %d",&a,&b);
    printf("before swapping a=%d ,b=%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nafter swapping a=%d ,b=%d",a,b);
    return 0;
}