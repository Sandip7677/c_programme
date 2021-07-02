#include<stdio.h>

int main(){
    int num1,num2;
    float x;
    // printf("%d",(int)x);
    printf("intput two integers \n");
    scanf("%d %d",&num1,&num2);
    // scanf("%f",&x);
    printf("sum of two given number is :%d\n",(num1+num2));
    x=num1+num2;
    printf("sum of two given number is :%f\n",x);
    // printf("subtraction of two given number is :%d\n",(num1-num2));
    // printf("multiplication of two given number is :%d\n",(num1*num2));
    // printf("devision of two given number is :%d\n",(num1/num2));
    return 0;
}