#include<stdio.h>
int main(){
    float clescius;
    printf("input temp in celcis \n");
    scanf("%f",&clescius);
    printf("celcius value of this is:%0.2f \n",(clescius*9)/5+32);
    printf("celcius value of this is:%f \n",(clescius*9)/5+32);
    printf("celcius value of this is:%10d",(int)(clescius*9)/5+32);
    return 0;
}