#include<stdio.h>
#include<limits.h>

int main(void)
{
    int x=0; int min=INT_MAX;
    do{
        printf("정수를 입력하세요 >>");
        scanf("%d",&x);
        if(x<min) {min=x;}
    } while(x!=0);
    printf("min = %d\n",min);
}