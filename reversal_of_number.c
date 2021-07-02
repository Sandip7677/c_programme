#include<stdio.h>

int main(){
    int num,rev=0,reminder;
    printf("input a number in integer \n");
    scanf("%d",&num);
    while (num !=0)
    {
        reminder=num%10;
        rev=(rev*10)+reminder;
        num=num/10;
    }
    printf("number after reversal is :- %d ",rev);
    return 0;
}