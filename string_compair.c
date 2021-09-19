#include<stdio.h>
#include<string.h>

int compair(char *a,char *b);

int main(){
    char str1[100];
    char str2[100];
    printf("write value in first string \n");
    gets(str1);
    printf("write value in second string \n");
    gets(str2);
    if(compair(str1,str2)){
        printf("both string are same\n");
    }
    else
    {
        printf("both are different \n");
    }
    return 0;
}


int compair(char *a,char *b){
    int i=0;
    int count =0;
    while (a[i]!= '\0' && b[i]!='\0')
    {
        if (a[i]==b[i])
        {
            count++;
        }
        i++;            
    }
    if (count==strlen(a))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}