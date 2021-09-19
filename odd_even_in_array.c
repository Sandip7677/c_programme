#include<stdio.h>
int main()
{
    int n;
    printf("input number of elment for your array \n");
    scanf("%d",&n);
    int array[n];
    printf("input %d element in array \n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(int i=0;i<n;i++){
       if (array[i]%2==0)
           printf("number at %d th position is even and is %d\n",i,array[i]);
       else
           printf("number at %d th position is odd and is %d\n",i,array[i]);
    }
    return 0;
}