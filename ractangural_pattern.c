#include<stdio.h>

int main(){
    int l,b;
    printf("input value of length and width of ractangle \n");
    scanf("%d %d",&l,&b);
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}