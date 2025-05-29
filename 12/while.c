#include<stdio.h>
int main(void){
    int sum =0, i=1;
    while(i<=10){
        sum+=i;
        printf("sum의 값은 >> %d\n", sum);
        printf("i의 값는 >> %d\n",i);
        i++;
    }
    printf("sum=%d\n",sum);
}