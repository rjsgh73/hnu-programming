#include<stdio.h>

int main(void){
    int n, d;
    printf("d,n >> ");
    scanf("%d%d",&d,&n);

    int a_i=0;
    printf("A1=%d\n",a_i);
    for(int i=1; i<=d; i++){
        a_i+=n;
        printf("A%d = %d\n",i+1,a_i);

    }
}