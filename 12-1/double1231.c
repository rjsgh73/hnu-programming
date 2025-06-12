#include<stdio.h>
int main(void){
    double x,y;
    printf("x1 x2 >>");
    scanf("%lf%lf",&x,&y);
    if(x>y) printf("x1과 x2의거리는 %.2lf",x-y);
    else printf("x1과 x2의거리는 %.2lf",y-x);
}