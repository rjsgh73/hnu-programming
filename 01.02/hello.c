#include <stdio.h> //printf() scan

//실습 문제 풀어보기
/*1번 문제*/
/*int main(void) {
  int x, y;
  x = 100;
  y = 200;
  x = 200;
  y = 100;
  printf("%d %d\n", x, y);  // x와 y 출력
  return 0;
}*/
//2번 문제
int main(void) {
  int x;
  x = 3;
  printf("0이상 9이하 정수를 입력하세요>> 3");
  scanf_s("%d",&x);
  printf("코끼리를 삼킨 보아뱀 \n");
  printf("%d%d%d \n",x,x,x);
  printf("%d%d%d \n",x,x,x);
  printf("%d%d%d%d%d%d%d \n",x,x,x,x,x,x,x);
  return 0;
}