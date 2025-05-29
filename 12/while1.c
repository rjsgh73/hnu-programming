#include<stdio.h>
int main(void){
    // int x;

    // x=0;
    // while (x>=0){
    //     printf("정수를 입력하세요>> ");
    //     scanf("%d",&x);
    // }
    // printf("종료합니다.\n");

    int x =0;
    do{
        printf("정수를 입력하세요 >>");
        scanf("%d",&x);
    }
    while(x>=0);
    printf("종료합니다.");
}
