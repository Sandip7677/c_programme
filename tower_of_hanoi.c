#include<stdio.h>
void th(int n,char from,char aux,char to){
    if(n==1){
        printf(" shift disk 1 from %c to %c \n",from,to);
        return;
    }
    th(n-1,from,to,aux);
    printf(" shift disk %d from %c to %c \n",n,from,to);
    th(n-1,aux,from,to);
}
int main(){
    int n;
    printf("input no of disks \n");
    scanf("%d",&n);
    th(n,'A','B','C');
    return 0;
}