#include<stdio.h>
int main()
{
    char ch;
    printf("input one alphabet \n");
    scanf("%c",&ch);
    if(97<=ch<=123){
        ch=ch-32;
    }
    // printf("%d",ch);
    if (ch=='A'|| ch=='E'|| ch=='I'||ch=='O'||ch=='U'){
        printf("given character is vowel \n");
    }
    else{
        printf("given chararcter is consonant \n");
    }
    
    return 0;
}