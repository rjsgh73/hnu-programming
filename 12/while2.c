#include<stdio.h>
#include<limits.h>

int main(void)
{
    int x=0; int min=INT_MAX;
    while(x!=0){
        printf("정수를 입력하세요 >>");
        scanf("%d",&x);
        if(x<min) {min=x;}
    }
    printf("min = %d\n",min);
}