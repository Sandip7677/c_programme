#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int arr[],int n){
    int min_ind;
    for(int i=0;i<n;i++){
        min_ind=i;
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[min_ind])
                min_ind=j;
        swap(&arr[i],&arr[min_ind]);
    }
}
int main(){
    int arr[]={2,7,1,9,5,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    printf("sorted array is \n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}