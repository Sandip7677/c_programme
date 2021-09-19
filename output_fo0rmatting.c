#include<stdio.h>
int main()
{
    int a=9;
    float x=45.98;
    printf("%5d \n",a);
    printf("%07d \n",a);
    printf("%10f \n",x);
    printf("%010f \n",x);
    printf("%010.3f \n",x);
    return 0;
}