#include<stdio.h>

int main(){
    int n,index;
    printf("input how many numbers you want in your arrray \n");
    scanf("%d",&n);
    int array[n];
    printf("input %d numbers in array \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("input index number of element you want to delete less than %d\n",n);
    scanf("%d",&index);

    printf("before deletion array is : \n");
    for (int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }

    for(int i=index;i<n-1;i++){
        array[i]=array[i+1];
    }
    // array[n-1]=0;
    array[n-1]=0;

    printf("after deletion array is: \n");
    for(int i=0;i<n-1;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}