#include<stdio.h>
int cal(int n){
    static int sum=0;
    if (n==0)
    {
        return 0;
    }
    sum=sum+n%10;
    cal(n/10);
    return sum;
}
int main(){
    int n=57;
    int sum=0;
    // while (n)
    // {
    //     sum=sum+(n%10);
    //     n=n/10;
    // }
    // for (;n>0;sum=sum+(n%10),n=n/10);    
    printf("sum= %d",cal(n));
    return 0;
}