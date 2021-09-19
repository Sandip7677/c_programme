// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// typedef struct employee
// {
//     char name[30];
//     char id[16];
//     float salary;
// }employee;

// int main()
// {
//     FILE *ptr;
//     char string[100];
//     char choice;
//     ptr = fopen("employee_data.txt", "a+");
//     struct employee s;
//     if (NULL == ptr)
//     {
//         printf("file can't be opened \n");
//         exit(1);
//     }

//     do
//     {
//         printf("write name of employee\n");
//         fflush(stdin);
//         gets(s.name);
//         printf("write id and salary of employee \n");
//         fflush(stdin);
//         scanf("%s%f", s.id, &s.salary);
//         fprintf(ptr, "%s %s %.2f \n", s.name, s.id, s.salary);
//         printf("input 'y' to add one more line of data to file or other character to stop\n");
//         fflush(stdin);
//         scanf("%c", &choice);
//     } while (choice == 'y' || choice == 'Y');

//     rewind(ptr);

//     while(fgets(string,100,ptr)!=NULL){
//         printf("%s\n",string);
//     }

//     return 0;
// }

/*in this coad we have first taken input name using gets so that it can have full name with space
  after that in place of spaces i have placed _ so that whole name can be readable using fscanf()
  after reading ,before printing i have replaced _ with space*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct employee
{
    char name[30];
    char id[16];
    float salary;
}employee;

int main()
{
    FILE *ptr;
    // char string[100];
    char choice;
    ptr = fopen("employee_data.txt", "a+");
    struct employee s;
    if (NULL == ptr)
    {
        printf("file can't be opened \n");
        exit(1);
    }

    do
    {
        printf("write name of employee\n");
        fflush(stdin);
        gets(s.name);
        printf("write id and salary of employee \n");
        fflush(stdin);
        scanf("%s%f", s.id, &s.salary);
        for(int i=0;i<sizeof(s.name);i++){
            if (s.name[i]==' ')
            {
                s.name[i]='_';
            }
        }
        fprintf(ptr, "%s %s %.2f \n", s.name, s.id, s.salary);
        printf("input 'y' to add one more line of data to file or other character to stop\n");
        fflush(stdin);
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');

    rewind(ptr);

    while(fscanf(ptr,"%s%s%f",s.name,s.id,&s.salary)!=EOF){
        for(int i=0;i<sizeof(s.name);i++){
            if (s.name[i]=='_')
            {
                s.name[i]=' ';
            }
        }
        printf("%s %s %.2f\n",s.name,s.id,s.salary);
    }
    fclose(ptr);
    return 0;
}


