#include<stdio.h>

int main(){
    int a,b,c;
    printf("input three numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if (b>c)
        {
            printf("%d is greatest \n",a);
        }
        else if (c>a)
        {
            printf("%d is greatest \n",c);
        }
    }

    else
    {
        if (b>c)
        {
            printf("%d is greatest \n",b); 
        }
        else if (c>a)
        {
            printf("%d is greatest\n",c);
        }
    }
    
    return 0;
}