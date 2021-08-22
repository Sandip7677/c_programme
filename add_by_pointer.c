#include<stdio.h>

int main(){
    int a,b;
    printf("input two numbers \n");
    scanf("%d %d",&a,&b);
    int *ptr1=&a;
    int *ptr2=&b;
    printf("sum of two given numbers is: %d",*ptr1 + *ptr2);
    return 0;
}