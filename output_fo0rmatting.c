#include<stdio.h>
int main()
{
    int a=5;
    float x=67.45;
    printf("%8d \n",a);
    printf("%08d \n",a);
    printf("%10f \n",x);
    printf("%010f \n",x);
    printf("%010.2f \n",x);
    return 0;
}