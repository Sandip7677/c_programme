#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    // int n;
    // char c[100];
    char *c=(char*)malloc(100*sizeof(char));
    int sum=0;
    printf("input an integer \n");
    // scanf("%d",&n);
    scanf("%s",c);
    /*converting integer to string using sprintf function */
    // sprintf(c,"%d",n);
    printf("%s\n",c);
    for (int  i = 0; i <strlen(c); i++)
    {
        sum=sum+c[i]-48;
    }
    printf("sum= %d",sum);
    return 0;
}