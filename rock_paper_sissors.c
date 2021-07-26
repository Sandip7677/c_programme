#include<stdio.h>
#include<stdlib.h>
#include<time.h>
                                                                                                          
int responce1,responce2;
char * name;

void get_input();
int round_winner();

int main(){
    static int count;
    int size =10;
    printf("\n\n\n \t\t\t\tROCK,PAPER AND SISSOR GAME\n\n\n");
    printf("player inter your name ");
    name=(char*)malloc(size);
    getline(&name,&size,stdin);
    int i=0;
    while(i<3)
    {
        get_input();
        if (round_winner()==2)
        {
            continue;
        }
        count += round_winner();
        i++;
    }
    if (count >0)
    {
        printf("\n\n \t\t%s is the winner \n",name);
    }
    else if (count <0)
    {
        printf("\n\n \t\tcomputer is the winner \n");
    }
    else
    {
        printf("\n\n\t\tmatch is tied");
    }
    free(name);
    return 0;
}

void get_input(){
    printf("\n\n");
    printf("input 0 for rock \n");
    printf("input 1 for paper \n");
    printf("input 2 for sessior \n");
    printf("player %s input your responce\n",name);
    scanf("%d",&responce1);
    srand(time(NULL));
    responce2=rand()%3;
    printf("computers input is %d\n",responce2);
}

int round_winner(){
    if (responce1==0)
    {
        if (responce2==0)
        {
            return 0;
        }
        else if (responce2==1)
        {
            return -1;
        }
        else if(responce2==2)
        {
            return 1;
        }
        else
        {
            printf("invalid input \n");
            return 2;
        }
         
    }
    else if (responce1==1)
    {
        if (responce2==0)
        {
            return 1;
        }
        else if (responce2==1)
        {
            return 0;
        }
        else if(responce2==2)
        {
            return -1;
        }
        else
        {
            printf("invalid input \n");
            return 2;
        }
        
    }
    else if(responce1==2)
    {
        if (responce2==0)
        {
            return -1;
        }
        else if (responce2==1)
        {
            return 1;
        }
        else if(responce2==2)
        {
            return 0;
        }
        else
        {
            printf("invalid input \n");
            return 2;
        }
    }
    else
    {
        printf("invalid input\n");
        return 2;
    }
    
}