#include<stdio.h>
// #include<Windows.h>
#include<unistd.h>
//windows=mac os
#include<stdbool.h>

int main(void){
    // 입력
int nums[5];
for (int i = 0; i < 5; i++) {
printf("정수>> ");
scanf("%d", &nums[i]);
}
// 계산
// 배열의 각 원소에 10을 곱하기
// 출력
printf("\n입력 받은 정수(*10): ");
for (int i = 0; i < 5; i++) {
printf("%d ", nums[i]*10);
}
printf("\n");
   return 0;
}