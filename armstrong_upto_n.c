#include <stdio.h>
#include <math.h>

int main(){
    int high,low,num2,reminder;
    printf("input range \n");
    scanf("%d %d",&low,&high);
    for(int i=low+1;i<=high;i++){
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
        if (i==sum)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}