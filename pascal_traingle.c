#include<stdio.h>

int main(){
    int n,k,j,i,num=1;
    printf("inter vlaue of n \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<(n-i);j++)
            printf(" ");
        num=1;
        printf("%d",num);
            for(k=1;k<=i;k++){
                num=num* (i-k+1)/k;
                printf("%4d ",num);
            }
        printf("\n");
    }
    return 0;
}