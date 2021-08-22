#include<stdio.h>
int main(){
    int n,n2;
    printf("input how many numbers you want in your arrray \n");
    scanf("%d",&n);
    int array[n];
    printf("input %d numbers in array \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    printf("before insertion array is : \n");
    for (int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    printf("input how many numbers you want to insert \n");
    scanf("%d",&n2);
    int array2[n+n2];

    for (int i = 0; i < n; i++)
    {
        array2[i]=array[i];
    }
    for(int i=0;i<n2;i++){
        int num,index;
        printf("input index number at which you want to insert your number \n");
        scanf("%d",&index);
        printf("input number \n");
        scanf("%d",&num);
        for(int j=index;j<n+n2;j++){
            int temp=array2[j];
            array2[j]=num;
            num=temp;
        }
    }

    printf("after insertion array is : \n");
    for (int i=0;i<n+n2;i++){
        printf("%d\n",array2[i]);
    }
    return 0;
}