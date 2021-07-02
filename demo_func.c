#include<stdio.h>

int cal(){
    return (5+7);
}

int print(){
    int cal();
    return cal();
}

int main(){
    printf("%d",print());
    return 0;
}