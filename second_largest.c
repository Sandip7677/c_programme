#include<stdio.h>
int main(){
    int n;
    printf("input size of  the array\n");
    scanf("%d",&n);
    int array[n];
    printf("input %d number of element in array \n",n);
    for (int i = 0; i < n; i++)
        scanf("%d",&array[i]);
    int largest=array[0];
    int s_largest=array[0];
    for(int i=1;i<n;i++){
        largest=largest>array[i]?largest:array[i];
        if(largest==s_largest)
            s_largest=array[i];
        else if(array[i]<largest && array[i]>s_largest)
            s_largest=array[i];
    }
    printf("second largest element in array is :- %d",s_largest);
    return 0;
}