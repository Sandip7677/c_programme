#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,d,r1,r2;
    printf("input cofficient of quadratic equation \n");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if (d>0)
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("real roots of the given equation are : %.2f and %.2f\n",r1,r2);
    }

    else if (d==0)
    {
        r1=r2=-b/(2*a);
        printf("both roots are equal and root is: %.2f",r1);
    }
    
    else
    {
        r1=-b/(2*a);
        r2=(-sqrt(d)/(2*a));
        printf("both rots are imagianry and are : %.2f + %f i  and %.2f - %f i",r1,r2,r1,r2);
    }
    
    return 0;
}