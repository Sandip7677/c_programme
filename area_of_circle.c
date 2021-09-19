#include<stdio.h>

void calculate(float n,float *area);
int main(){
    float r,area;
    printf("input radius of circle \n");
    scanf("%f",&r);
    calculate(r,&area);
    printf("area of circle is:- %.2f unit square",area);
    return 0;
}

void calculate(float n,float *area){
    *area=3.14*n*n;
}