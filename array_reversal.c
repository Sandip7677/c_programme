#include<stdio.h>

int main(){
    int n;
    printf("input size of  the array\n");
    scanf("%d",&n);
    int array[n];
    printf("input %d number of element in array \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("before reversal array is : \n");
    for (int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }

    // for (int i=n-1;i>=0;i--){
    //     printf("%d\n",array[i]);
    // }
    printf("\n");

    int temp;
    for(int i=0;i<(n/2);i++){
        temp=array[n-1-i];
        array[n-1-i]=array[i];
        array[i]=temp;
    }

    printf("after reversal array is: \n");
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}