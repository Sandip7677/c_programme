#include<stdio.h>

int main(){
    char ch;
    printf("input an english alphabet \n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("given char is a vowel \n");
        break;
    
    default:
        printf("given char is a consonent \n");
        break;
    }
    return 0;
}