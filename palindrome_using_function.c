#include <stdio.h>
#include <math.h>
int cal(int n);
int reverse(int n);

int main()
{
    int num1;
    printf("inter vlaue of integer \n");
    scanf("%d", &num1);
    reverse(num1);
    if (cal(num1))
    {
        printf("given number is a armstrongS\n");
    }
    else
    {
        printf("given number is not armstrong\n");
    }

    return 0;
}

int cal(int n)
{
    int num2 = n, reminder;
    int count = 0;
    float toatl;
    count = (int)log10(n) + 1;
    while (num2)
    {
        reminder = num2 % 10;
        toatl = toatl + pow(reminder, count);
        num2 = num2 / 10;
    }
    if (n == toatl)
        return 1;
    else
        return 0;
}
int reverse(int n)
{
    int rev = 0, reminder;
    while (n !=0 )
    {
        reminder = n % 10;
        rev = rev * 10 + reminder;
        n = n / 10;
    }
    printf("number after reversing is: %d\n",rev);
    return rev;
}