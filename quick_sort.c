#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int participent(int arr[],int l,int r){
   int p=arr[l];
   int i=l;
   int j=l+1;
   for(;j<=r;j++){
       if(arr[j]<p){
           i++;
           swap(&arr[i],&arr[j]);
       }
   }
   swap(&arr[i],&arr[l]);
   return i;
}
void quick_sort(int arr[],int l,int r){
    if(l<r){
        int p=participent(arr,l,r);
        quick_sort(arr,l,p-1);
        quick_sort(arr,p+1,r);
    }
}
int main(){
    int arr[]={2,45,1,13,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}