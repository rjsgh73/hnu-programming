#include <stdio.h>

int main(void){
    int sum=0;
    int arr[5];
    for(int i=1; i<=5; i++){
        printf("정수 >> ");
        scanf("%d",&arr[i]);
        sum+=i;

        printf("핪계 >>%d",sum);

        if(arr[i]<0){
            break;
        }
    }
}