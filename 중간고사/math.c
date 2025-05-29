#include<stdio.h>

int main(void){
    int x, y, result;
    char op;
    while(1){
        //1->참임으로 무한 반복
        printf("\n수식 입력 >>");
        scanf("%d%c%d",&x,&op,&y);
        if(x==0&&y==0){
            printf("계산이 프로그램을 종료합니다.");
            break;
        }
        if (op=='+')        {result=x+y;}
        else if(op=='-')    {result=x-y;}
        else if(op=='*')    {result=x*y;}
        else if(op=='/')    {result=x/y;}
        else                {result=0;}
        
        printf("%d %c %d = %d\n",x,op,y,result);
    
        break;

    }
    return 0;
}
