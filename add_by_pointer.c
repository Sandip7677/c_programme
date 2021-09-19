#include<stdio.h>

int main(){
    int a,b,add;
    printf("input two integer \n");
    scanf("%d %d",&a,&b);
    int *ptr1=&a;
    int *ptr2=&b;
    add=*ptr1 + *ptr2;
    printf("sum of two given numbers is: %d",add);
    return 0;
}