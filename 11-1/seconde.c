#include <stdio.h>
int sum_range(int start, int stop)
{
    int sum = 0;
    for (int i = start; i <= stop; i++){
        sum +=i;
    }
    return sum;
}

int main(void){
    int n, m, sum;
    printf("m ="); scanf("%d",&m);
    for(int i=0; i<m; i++){
        printf("n="); scanf("%d",&n);
        sum = sum_range(1,n);
        printf("%d\n",sum);
    }
    return 0;
}