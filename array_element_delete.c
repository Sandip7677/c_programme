#include<stdio.h>

int main(){
    int n,element;
    printf("input how many numbers you want in your arrray \n");
    scanf("%d",&n);
    int array[n];
    printf("input %d numbers in array \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("input index number of element you want to delete\n");
    scanf("%d",&element);

    printf("before deletion array is : \n");
    for (int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }

    for(int i=element;i<n-1;i++){
        array[i]=array[i+1];
    }
    // array[n-1]=0;

    printf("after deletion array is: \n");
    for(int i=0;i<n-1;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}