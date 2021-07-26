#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,num2;
    float total;
    printf("input a three digit nunber \n");
    scanf("%d",&n);
    num2=n;
    while(num2)
   {
       rem=num2%10;
       total=total+pow(rem,3);
       num2=num2/10;
   }
   if (total==n)
   {
       printf("%d is an armstrong number \n",n);
   }
   
    return 0;
}