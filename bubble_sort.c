#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int count=-1;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                count++;
            }
        }if(count==-1) break;
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
    bubble_sort(array,n);
    printf("arrray after sorting \n");
    for (int i = 0; i < n; i++)
        printf("%d ",array[i]);
    return 0;
}