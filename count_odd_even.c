#include<stdio.h>

int main(){
    int n,count_even=0,count_odd=0,count=0;
    printf("input number of elment you want in your array \n");
    scanf("%d",&n);
    int array[n];
    printf("input %d element in array \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
       if (array[i]%2==0 && array[i]!=0)
       {
           count_even++;
       }
       else if (array[i]!=0)
       {
           count_odd++;
       }
       else
       {
           count++;
       }
    }
    printf("number of odd element is: %d ,number of even number is: %d ,number of zero in array is: %d",count_odd,count_even,count);
    return 0;
}