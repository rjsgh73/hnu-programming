#include<stdio.h>
 int main (void){
    int com=0;
    int weight[5]={34,78,64,100,36};

    for (int i=0; i<5; i++){
        if(weight[i]>=60){
            com++;
        }
        printf("개수>>%d개",com);
        return 0;
    }
 }