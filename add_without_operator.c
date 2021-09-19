#include<stdio.h>

int add(int x,int y);

int main(){
    int a,b;
    printf("input two number\n");
    scanf("%d %d",&a,&b);
    printf("sum =%d",add(a,b));
    return 0;
}

int add(int x,int y){
    return printf("%*c%*c",x,'\r',y,'\r');
}