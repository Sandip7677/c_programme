#include<stdio.h>
int cal(int a,int b,int c){
    if(a>b){
        if (b>c)
        {
            return a;
        }
        else if (c>a)
        {
            return c;
        }
    }

    else
    {
        if (b>c)
        {
            return b; 
        }
        else if (c>a)
        {
            return c;
        }
    }
}
int main()
{
    int a,b,c;
    printf("input three number \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("gratest between three is:- %d",cal(a,b,c));
    return 0;
}