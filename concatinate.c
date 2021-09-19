#include<stdio.h>
#include<string.h>
void cancate(char *t,char * s);

int main(){
    char str1[100];
    char str2[50];
    printf("write value in first string \n");
    gets(str1);
    printf("write value in second string \n");
    gets(str2);
    printf("before cancatination \n");
    printf("%s \n",str1);
    cancate(str1,str2);
    printf("after cancatination \n");
    printf("%s \n",str1);
    return 0;
}

void cancate(char *t,char *s){
    int i=0;
    int l=strlen(s);
    while(s[i]!= '\0'){
        t[l]=s[i];
        l++;
        i++;
    }
    t[l]='\0';
}