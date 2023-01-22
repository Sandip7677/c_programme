#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++)
        arr1[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        arr2[i]=arr[mid+1+i];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j])
            arr[k++]=arr1[i++];
        else    
            arr[k++]=arr2[j++];
    }
    while(i<n1)
        arr[k++]=arr1[i++];
    while(j<n2)
        arr[k++]=arr2[j++];
}
void merge_sort(int arr[],int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(){
    int array[]={2,30,1,19,7,5};
    int n=sizeof(array)/sizeof(array[0]);
    merge_sort(array,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",array[i]);
    return 0;
}

