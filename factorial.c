#include<stdio.h>

int main(){
    int n,factorail=1;
    printf("input number of which you want to find factorial\n");
    scanf("%d",&n);
    for (int i = n; i >=1; i--)
    {
        factorail=factorail*i;
    }
    printf("factorlal of number %d is:- %d",n,factorail);
    return 0;
}