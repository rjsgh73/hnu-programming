#include <stdio.h>
#include<limits.h>

int num[5];
int max=INT_MIN, min=INT_MAX;
int main(void)
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(">>");
            scanf("%d", &num[j]);
            if(max<num[j]){max=num[j];}
            if(min>num[j]){min=num[j];}
            
        }
        printf("max=%d, min=%d\n", max, min);
    }
}