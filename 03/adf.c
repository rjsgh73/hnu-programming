#include <stdio.h>
int main(void)
{
    int x;
    printf(">> ");
    scanf_s("%d", &x);
    if (x > 0)
    {
        printf("%d은(는) 양의 정수\n", x);
    }
    printf("끝\n");
    return 0;
}