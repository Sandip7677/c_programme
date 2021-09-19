

    /*a ponter can store address of variable ,array,structure,function or file;
    
    variable 
        <data type of varible whose address you have to store> * ptr;

    array 
        int arr[45];
        int *ptr1;
        int (*ptr)[45]; ptr is a pointer to an array of size 45;
        ptr=arr;
        int * trp[45]; ptr is an array of size 45 whose element are integer pointer
    
    function
        int cal(int a);

        int *ptrfun(int);

        float calculation(int a,float b);

        float *ptrfun2(int ,float)=calculation;

        int digit();
        int *ptr3()=digit;

    structure 
        struct student                                 int main(){}
        {
            int a;
            float b;
        };
        struct student *ptr;
        struct student x;
        x.a;
        (*ptr).a;
        (*).  ->
        ptr->a;
    
    FILE *ptr;

    char name[50];
    *(name+0);
    *(name+1);

    int marksheet[50][7];
    *(*(marksheet+0)+0);

    int arr[4];

    cal(arr);



int main(){
    int arr[56];
    sizeof(arr,size);     56;

    cal(arr,n){
        
    }
}
    */

// #include<stdio.h>

// void type(int array[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",array[i]);  //*(array+i);
//     }
    
// }
// int main()
// {
//     int size=5;
//     int array[size];
//     printf("input integers in array \n");
//     for(int i=0;i<size;i++){
//         scanf("%d",&array[i]);
//     }
//     printf("array is:- \n");
//     type(array,size);
//     return 0;
// }


#include<stdio.h>
#include<string.h>
void print(char array[]){
    puts(array);
    
}
int main()
{

    char array[20];
    printf("write in string \n");
    // scanf("%s",array);  
    gets(array);
    printf("string is:- \n");
    print(array);
    return 0;
}