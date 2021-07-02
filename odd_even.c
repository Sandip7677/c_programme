/*

logic1
  x %2==0-->even
  x%2!=0-->odd
  
logic2
 5-->101
 1-->001
 &-->001
 
 6-->110
 1-->001
 &-->000
 
 x&1==1-->odd
 x&1==0-->even
 
 */

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d",a&1);
    if ((a & 1) == 0)
    {
        printf("given value is even \n");
    }
    else if((a&1)==1)
    {
        printf("given value is odd \n");
    }
    // ((a&1)==0)?printf("even"):printf("odd");

    return 0;
}