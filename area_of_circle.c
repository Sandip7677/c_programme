#include<stdio.h>

float calculate(int *n);
int main(){
    int r;
    printf("input radius of circle \n");
    scanf("%d",&r);
    printf("area of circle is:- %.2f unit square",calculate(&r));
    return 0;
}

float calculate(int *n){
    return (3.14*(*n)*(*n));
}