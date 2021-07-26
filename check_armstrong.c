#include<stdio.h>
#include<math.h>

int main(){
    int n,num2,reminder;
    int count;
    float toatl;
    printf("input number you want to check for armstrong\n");
    scanf("%d",&n);
    count=(int)log10(n)+1;
    num2=n;
   while(num2)
   {
       reminder=num2%10;
       toatl=toatl+pow(reminder,count);
       num2=num2/10;
   }
   if (toatl==n)
   {
       printf("%d is armstrong number",n);
   }
    return 0;
}