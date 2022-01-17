#include<stdio.h>
int fab(int n){
    static int n1=0,n2=1,n3;
    if(n>1){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d  ",n3);
        fab(n-1);
    }
}
int main(){
    int n;
    printf("input an intiger value upto which you want to see fabonnici series\n");
    scanf("%d",&n);
    if(n==0)
        printf("0 ");
    if(n==1)
        printf("0  1  ");
    else{
        printf("0  1  ");
        fab(n);
    }
    return 0;
}