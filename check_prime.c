#include<stdio.h>

int main(){
    int n,i;
    printf("input number to check for prime number \n");
    scanf("%d",&n);
    for (i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            printf("given nlumber is not prime number\n");
            break;
        }
    }
    
    if (i==n)
    {
        printf("it is a prime number \n");
    }
    
    return 0;
}