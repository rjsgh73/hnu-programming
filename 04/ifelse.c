#include <stdio.h>

int main(void)
{
    int age;
    printf("성적>> ");
    scanf("%d", &age);
    if (age <= 18)
    {
        printf("청소년입니다.\n");
    }
    else if (age < 65)
    {
        printf("성인입니다.\n");
    }
    else
    {
        printf("노인입니다.\n");
    }

    return 0;
};