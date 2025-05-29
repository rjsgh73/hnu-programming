#include<stdio.h>
#include<limits.h>

int main(void){
    int num[5];
    for(int i = 0; i<5; i++){
        printf(">>");
        scanf("%d",&num[i]);
    }
    int max=INT_MIN;
    for(int i =0; i<5; i++){
        if(max<num[i]){max = num[i];}
    }
    printf("max=%d\n",max);
    return 0;
}