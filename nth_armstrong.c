#include<stdio.h>
#include<math.h>
int main()
{
    int n,num2,reminder;
    int count=0;
    printf("input an integer value \n");
    scanf("%d",&n);
    for(int i=1;1<5;i++){
        float sum=0;
        int digit;                                                                     
        num2=i;
        digit=(int) log10(num2)+1;
        while (num2)
        {                                                              
            reminder=num2%10;
            sum=sum+pow(reminder,digit);
            num2=num2/10;
        }
        // printf("%d",sum);
        if (i==sum)
        {
            count++;
        }
        if(count==n){
            printf("nth armstring is %d \n",i);
            break; 
        }     
    }
    return 0;
}