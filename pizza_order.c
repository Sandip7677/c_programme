#include<stdio.h>

int main(){
    char name[30];
    char size;
    int person;
    float price;
    printf("input pizza name \n");
    gets(name);
    printf("write size of pizza as 's','m' and 'l' \n");
    fflush(stdin);
    // scanf("%c",&size);
    size=getchar();
    printf("input no of persons \n");
    scanf("%d",&person);
    printf("price of the pizza \n");
    scanf("%f",&price);
    printf("...........gathering info..........\n");
    printf("you have orderd %s pizza of '%c' size which serves %d person,give %.3f rs to delivery boy \n",name,size,person,price);
    return 0;
}