#include<stdio.h>
#include<stdbool.h>

int main(void){
    int x = 10, y = 0;
    //for 문은 거의 정형화되어 있다.
    for(int i = 1; i<=10; i++) {
        printf("x>> ");
        scanf("%d",&x);
    }
    return 0;
}