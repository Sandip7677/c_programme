#include<stdio.h>
#include<stdlib.h>


int main(){
    char * id;
    int length;
    for(int i=0;i<3;i++){
        printf("input length of your id \n");
        scanf("%d",&length);
        id=(char *)malloc(length*sizeof(char));
        getchar();
        printf("input your id \n");
        getline(&id,&length,stdin);
        // scanf("%s",id);
        printf("your id is %s\n",id);
        free(id);
    }
    return 0;
}