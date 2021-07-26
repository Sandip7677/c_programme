#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("input number of elment you want in your array \n");
    scanf("%d",&n);
    int array[n];
    printf("input %d element in array \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    printf("sum of all numbers is: %d",sum);
    return 0;
}