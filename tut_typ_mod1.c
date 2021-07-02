#include<stdio.h>
int main(){
    int a;
    printf("input an integer value \n");
    scanf("%d",&a);
    // scanf("%d",&a);
    printf("%d \n",a);
    printf("%c \n",a);
    // printf("%f\n",a);
    printf("%f\n",(float)a);
    float f;
    printf("input a floating value \n");
    scanf("%f",&f);
    printf("%f \n",f);
    printf("%d \n",f); 
    printf("%d \n",(int)f); 


     double x;
    printf("input a double value \n");
    scanf("%lf",&x);
    printf("%lf \n",x);
    printf( "%f",(float)x);
    return 0;
}
