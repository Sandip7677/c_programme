#include<stdio.h>
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int p=arr[i];
        for(;j>=0&&arr[j]>p;j--)
            arr[j+1]=arr[j];
        arr[j+1]=p;
    }
}
int main(){
    int n;
    printf("input size of  the array\n");
    scanf("%d",&n);
    int array[n];
    printf("input %d number of elements in array\n",n);
    for (int i = 0; i < n; i++)
        scanf("%d",&array[i]);
    printf("array before sorting \n");
    for (int i = 0; i < n; i++)
        printf("%d ",array[i]);
    printf("\n");
    insertion_sort(array,n);
    printf("arrray after sorting \n");
    for (int i = 0; i < n; i++)
        printf("%d ",array[i]);
    return 0;
}