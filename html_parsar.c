#include<stdio.h>
#include<malloc.h>

void print(char *s){
    int count=1;
    int i=1,j;
    while (s[i]!='>')
    {
        count ++;
        i++;
    }
    j=count+1;
    while (s[j]!='<')
    {
        printf("%c",s[j]);
        j++;
    }
    return;
}

int main(){
    char * s;
    int size=10;
    printf("input html coad \n");
    s=(char *)malloc(size);
    getline(&s,&size,stdin);
    printf("string in this html coad is :- ");
    print(s);
    return 0;
}