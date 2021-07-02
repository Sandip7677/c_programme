#include<stdio.h>
int main()
{
    int a=50,b=20;
    printf("%d %d \n",a+8*b++-3/2+a%b*4+10+--a,b);
    printf("%d %d \n",++b&&-3 + ++b,b);
    printf("%d %d \n",++b&&-3 + b++,b);
    int c=-1;
    printf("%d %d \n",c++ +1  && c++ ,c);
    printf("%d %d \n",c++ +1  && ++c ,c);
   
    return 0;
}                                                                                                                                                                    