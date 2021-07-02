#include<stdio.h>

int main(){
    float a,b,c,result;
    printf("input three float values \n");
    scanf("%f %f %f",&a,&b,&c);
    result=a+b+c;
    printf("result of given values is %d",(int)result); 
    return 0;
}