#include<stdio.h>
int main(void){
    int x;
    char output;
    printf("x = ");
    scanf("%d", &x);

    if (x==1)
        output = 'A';
    else if (x ==2)
        output = 'B';
    else
    output = '?';

    printf("%c\n", output);

    
}