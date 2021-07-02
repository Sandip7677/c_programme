#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("input four integer values \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("result of the expression (a<b+d)?b+c:c-d is %d \n",(a<b+d)?b+c:c-d);
    printf("result of the expression c++-d+a?(a<=b*c):c+b/a is %d \n",c++ - d+a?(a<=b*c):c+b/a);
    return 0;
}