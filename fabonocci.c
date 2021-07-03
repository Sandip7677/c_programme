#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("input number upto which place you want to print the fabonicci series \n");
    scanf("%d",&n);
    // if (n==0)
    
        printf("%d \n",a);
      // else if(n==1){
        printf("%d \n",b);
    
    
        for (int i = 2; i < n; i++)
        {
            c=a+b;
            a=b;
            b=c;
        printf("%d \n",c);
        }
        // printf("%d \n",c);
    
    return 0;
}