#include<stdio.h>
int linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++)
        if(arr[i]==key) return i;
    return -1;
}
int binary_search(int arr[],int l,int r,int key){
    if(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) return binary_search(arr,l,mid-1,key);
        else if(arr[mid]<key) return binary_search(arr,mid+1,r,key);
    }
    return -1;
}
int main(){
    int n,x;
    printf("input size of  the array\n");
    scanf("%d",&n);
    int array[n];
    printf("input %d number of element in array  in sorted order \n",n);
    for (int i = 0; i < n; i++)
        scanf("%d",&array[i]);
    printf("input a number to search \n");
    scanf("%d",&x);
    printf(" using linear search to find number %d -  ",x);
    if(linear_search(array,n,x)==-1)
        printf("no is not present in array \n");
    else
        printf("no is present at index %d \n",linear_search(array,n,x));
    int a=binary_search(array,0,n-1,x);
    printf(" using binary search to find number %d -  ",x);
    if(a==-1)
        printf("no is not present in array \n");
    else
        printf("no is present at index %d \n",a);
    return 0;
}