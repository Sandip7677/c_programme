#include<stdio.h>

int cal(int x,int y);

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("result if the expression is:%d",cal(a,b));
}

int cal(int x,int y){
    return (x+y)*(x-y);
}
