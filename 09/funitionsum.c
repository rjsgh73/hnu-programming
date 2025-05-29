#include<stdio.h>
int sum (int , int );
int sub(int , int );

int sum(int a, int b){
    int res = a+b;
    return res;
}

int sub(int a, int b){
    int res = a-b;
    return res;
}

int main(void){
    int result = sum(10,20);
    int result2 = sub(30,20);
    printf("%d\n%d\n",result,result2);
    return 0;
}