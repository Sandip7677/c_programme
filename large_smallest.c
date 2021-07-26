#include<stdio.h>
int main()
{
    int n;
    printf("input how many numbers you want in your arrray \n");
    scanf("%d",&n);
    int array[n];
    printf("input %d numbers in array \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int largest=array[0];
    int smallest=array[0];
    for(int i=0;i<n;i++){
        if (largest<array[i])
        {
            largest=array[i];
        }
        if (smallest>array[i])
        {
            smallest=array[i];
        }
    }
    printf("smallest and largest element in the array is: %d and %d",smallest,largest);
    return 0;
}