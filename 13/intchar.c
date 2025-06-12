#include <stdio.h>

int main(void){
    int kor = 100, eng = 85 , math = 92;
    int tot = kor + eng + math;
    double avg = tot/3;
    printf("average = %.2f\n",avg);
}