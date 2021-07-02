#include<stdio.h>

int main(){
    int len0,len1,len2,len3,len4;
    int wid0,wid1,wid2,wid3,wid4;
    len0=1189;
    wid0=841;
    printf("size of A0 paper is :%dmm x %dmm \n",len0,wid0);
    len1=wid0;
    wid1=len0/2;
    printf("size of A1 paper is :%dmm x %dmm \n",len1,wid1);
    len2=wid1;
    wid2=len1/2;
    printf("size of A2 paper is :%dmm x %dmm \n",len2,wid2);
    len3=wid2;
    wid3=len2/2;
    printf("size of A3 paper is :%dmm x %dmm \n",len3,wid3);
    len4=wid3;
    wid4=len3/2;
    printf("size of A4 paper is :%dmm x %dmm \n",len4,wid4);
    return 0;
}