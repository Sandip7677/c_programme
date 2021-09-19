#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct student{
    char name[30];
    int id;
    float fee;
}student;

int main(){
    FILE *ptr;
    ptr=fopen("student data.txt","a+");
    if (NULL== ptr)
    {
        printf("file can't be opened \n");
        exit(1);
    }
    
    student s;
    char choice='y';
    int size=sizeof(student);

    while (choice == 'y')
    {
       printf("input name, id and fee of the student\n");
       scanf("%s%d%f",s.name,&s.id,&s.fee);
       printf("%d %.1f",s.id,s.fee);
       fwrite(&s,size,1,ptr);
       printf("add another record (y/n)\n");
       fflush(stdin);
       scanf("%c",&choice);
    }
    return 0;
}