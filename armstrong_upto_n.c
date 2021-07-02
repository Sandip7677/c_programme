#include <stdio.h>
#include <math.h>

int main(){
    int num1,num2,reminder;
    printf("input an integer value \n");
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++){
        float sum=0;
        num2=i;
        int j=0;
        while (num2)
        {
            j++;
            num2=num2/10;
        }
        num2=i;
        while (num2)
        {
            reminder=num2%10;
            sum=sum+pow(reminder,j);
            num2=num2/10;
        }
        // printf("%d",sum);
        if (i==sum)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}