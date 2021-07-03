#include<stdio.h>
#include<stdlib.h>

int main(){
  int size=10;
  // char a;
  // printf("input char \n");
  // scanf("%c",&a);
  char *string=(char *)malloc(size);
//   string=(char *)malloc(size);
  getline(&string,&size,stdin);
  printf("%s",string);
  free(string);
    return 0;
}