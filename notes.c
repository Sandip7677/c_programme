#include <stdio.h>
void stu(int a){
        int i=0;
        while (i<5)
        {
            a++;
        }
        printf("%d",a);
    }

int main()
{
    // int N;
    // static int count1,count2,count3,count4,count5,count6;
    // printf("input the amount \n");
    // scanf("%d", &N);
    // if (N >= 100)
    // {
    //     while (N >= 100)
    //     {
    //         N = N - 100;
    //         count1 = count1 + 1;
    //     }
    // }
    // if (N >= 50)
    // {
    //     while (N >= 50)
    //     {
    //         N = N - 50;
    //         count2 = count2 + 1;
    //     }
    // }
    // if (N >= 10)
    // {
    //     while (N >= 10)
    //     {
    //         N = N - 10;
    //         count3 = count3 + 1;
    //     }
    // }
    // if (N >= 5)
    // {
    //     while (N >=5)
    //     {
    //         N = N - 5;
    //         count4 = count4 + 1;
    //     }
    // }
    // if (N >= 2)
    // {
    //     while (N >= 2)
    //     {
    //         N = N - 2;
    //         count5 = count5 + 1;
    //     }
    // }
    // if (N >= 1)
    // {
    //     while (N >= 1)
    //     {
    //         N = N - 1;
    //         count6 = count6 + 1;
    //     }
    // }
    // printf("no of minimun notes required is 100 x%d + 50 x%d + 10x%d + 5x%d + 2x%d +1 x%d\n", count1,count2,count3,count4,count5,count6);
    int a=0;
    stu(a);
    stu(a);
    return 0;
}