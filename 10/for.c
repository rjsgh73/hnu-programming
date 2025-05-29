#include<stdio.h>

int main(void){
    int num[5]={0};
    for(int i = 0; i < 5; i++){
        printf("몸무게 >>");
        scanf("%d",&num[i]);
    }
    int min=num[0];
    for(int i=0; i<5; i++){
        if(min>num[i]){
            min=num[i];
        }
    
    printf("가장 가벼운 몸무게 >> %dkg\n", num[i]);
    return 0;
    }
}