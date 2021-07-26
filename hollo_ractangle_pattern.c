#include<stdio.h>
int main()
{
    int l,b;
    printf("input length and width of ractangle \n");
    scanf("%d %d",&l,&b);
    for (int i = 1; i <= b ; i++)
    {
        printf("                                ");
        for (int j = 1; j <= l; j++)
        {
            if ((j!=1 && j!=l)&&(i!=1 && i!=b))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}