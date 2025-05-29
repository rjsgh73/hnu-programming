#include <stdio.h>
int main(void){
    double spr,scl,tra;
    printf("네모 - 동그라미 * 세모 = ?\n");
    printf("네모 동그라미 세모 >>");
    scanf("%lf%lf%lf",&spr, &scl, &tra);
    printf("%.2lf+%.2lf*%.2lf=%.2lf",spr,scl,tra,spr+scl*tra);

}