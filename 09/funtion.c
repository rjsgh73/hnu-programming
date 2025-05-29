#include<stdio.h>

int sum(int, int);

int sum(int a, int b){
    int res = a+b;
    return res;
}

int main(void){
    int result =sum(10,20);
    printf("%d\n",result);
    return 0;
}