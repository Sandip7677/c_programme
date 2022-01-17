#include<stdio.h>
int main(){
    int n;
    printf("input size of  the array\n");
    scanf("%d",&n);
    int array[n];
    printf("input %d number of element in array \n",n);
    for (int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    printf("array in normal order is:- \n");
    for(int i=0;i<n;i++)
        printf("%d ",array[i]);
    printf("\n"); 
    printf("array in reverse order is:- \n");
    for(int i=n-1;i>=0;i--)
        printf("%d ",array[i]);
    return 0;
}