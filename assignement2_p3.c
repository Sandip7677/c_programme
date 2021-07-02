#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("input four integers values \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("result of the expression a=b+=c is %d\n",a=b+=c);
    printf("result of the expression a+=c<<=b is %d\n",a+=c<<=b);       
    printf("result of the expression a=b+=c<<=d/=a&=d is %d\n",a=b+=c<<=d/=a&=d);       
    return 0;
}