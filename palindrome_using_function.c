#include<stdio.h>

int cal(int n);
int reverse(int n);

int main()
{
    int num1;
    printf("inter vlaue of integer \n");
    scanf("%d",&num1);
    if (cal(num1))
    {
        printf("given number is a palindrome \n");
    }
    else
    {
        printf("given number is not palindrome \n");
    }
    
    return 0;
}

int cal(int n){
    if (n==reverse(n))
        return 1;
    else
        return 0;
}

int reverse(int n){
    int rev=0,reminder;
    while (n!=0){
        reminder=n%10;
        rev=rev*10+reminder;
        n=n/10;
    }
    return rev;
}