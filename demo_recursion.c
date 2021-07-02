#include<stdio.h>

int print(int a){
  if (a==0)
  {
      return 0;
  }
  for (int i = 0; i < a; i++)
  {
      printf("*");
  }
    printf("\n");
  print(a-1);
}
int main(){
    print(5);
    return 0;
}