#include<stdio.h>

float roundoff(float n,int p){
    return n>0?n+p:n-p;
}
int main(){
    float n;
    float presize[6]={.5,.05,.005,.0005,.00005,.000005};
    printf("input the floating point number \n");
    scanf("%f",&n);
    int i;
    printf("input presion for round off \n");
    scanf("%d",&i);
    printf("number after roundoff is %.*f",i,roundoff(n,presize[i]));
    return 0;
}

