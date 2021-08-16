#include <stdio.h>

int main()
{
    char ch;
    float num1, num2;
    printf("input two number \n");
    scanf("%f %f", &num1, &num2);
    printf("input + to add \n");
    printf("input - to subtract \n");
    printf("input * to multiply \n");
    printf("input / to devide \n\n");
    getchar();
    scanf("%c", &ch);
    switch (ch){
    case '+':
        printf("result of  the operation is : %.2f\n", num1 + num2);
        break;
    case '-':
        printf("result of  the operation is : %.2f\n", num1 - num2);
        break;
    case '*':
        printf("result of  the operation is : %.2f\n", num1 * num2);
        break;
    case '/':
        printf("result of  the operation is : %.2f\n", num1 / num2);
        break;
    default:
        printf("invalid input");
    }
    return 0;
}