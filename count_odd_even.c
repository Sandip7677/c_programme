#include <stdio.h>
int main()
{
    int n, count1 = 0, count2 = 0, count = 0;
    printf("input number of elment for your array \n");
    scanf("%d", &n);
    int array[n];
    printf("input %d element in array \n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0 && array[i] != 0)
            count1++;
        else if (array[i]%2!= 0)
            count2++;
        else
            count++;
    }
    printf("number of odd element is:%d,number of even number is:%d, number of zero is: %d",count2,count1,count);
    return 0;
}