#include<stdio.h>

int main(){
    int num1,num2,rev=0,reminder;
    printf("inter vlaue of integer \n");
    scanf("%d",&num1);
    num2=num1;
    while (num2!=0)
    {
        reminder=num2%10;
        rev=rev*10+reminder;
        num2=num2/10;
    }
    if (num1==rev)
    {
        printf("it is a pelindrom \n");
    }
    else
    {
        printf("it is not a pelindrome \n");
    }
    
    return 0;
}