#include<stdio.h>
int main(){
    int n;
    printf("input size of  the array\n");
    scanf("%d",&n);
    int array[n];
    printf("input %d number of element in array \n",n);
    for (int i = 0; i < n; i++)
        scanf("%d",&array[i]);
    int even[n];int odd[n];
    int j=0,k=0;
    for(int i=0;i<n;i++){
        if(array[i]%2==0)
            even[j++]=array[i];
        else
            odd[k++]=array[i];
    }
    printf("even array is:- \n");
    for(int i=0;i<j;i++)
        printf("%d ",even[i]);
    printf("\n");
    printf("odd array is:- \n");
    for(int i=0;i<k;i++){
        printf("%d ",odd[i]);
    }
    return 0;
}