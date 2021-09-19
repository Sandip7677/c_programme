#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *ptr;
    char str[50];
    ptr=fopen("text.txt","a+");
    if(NULL== ptr){
        printf("file can't be opened \n");
    }
    printf("content of this file are \n");
    while(fgets(str,50,ptr)!=NULL){
        printf("%s",str);
    }
    printf("write your lines \n");
    while(strlen(gets(str))>0){
        fprintf(ptr,"%s \n",str);
    }
    fclose(ptr);
    return 0;
}

 // char str1[100];
    // ptr=fopen("text.txt","a+");
    // while(fgets(str1,50,ptr)!=NULL)
    //     printf("%s",str1);
    // printf("write your string \n");
    // gets(str);
    // fprintf(ptr,"%s \n",str);