#include<stdio.h>
int main(void){
    int x,y,z;
    int gop;
    int sum;
    printf("정수 세개 입력 >> ");
    scanf("%d%d%d",&x,&y,&z);
    gop=x*y*z;
    sum=x+y+z;
    printf("실수의 곱 = %dx%dx%d=%.2lf",x,y,z,gop);
    printf("실수의 합=%d+%d+%d=%.2lf",x,y,z,sum);
}