/*input basic salary and calculate gross salary if HA is 20 % and OA is 40%*/
#include<stdio.h>

int main(){
    int basic_salary,gross_salary;
    int HA,OA;
    printf("input basic salary \n");
    scanf("%i",&basic_salary);
    HA=basic_salary+(basic_salary*0.2);
    OA=basic_salary+(basic_salary*0.4);
    gross_salary=basic_salary+HA+OA;
    printf("gross salary is:%i\n ",gross_salary);
    return 0;
}