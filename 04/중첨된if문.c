    #include <stdio.h>

    int main(void)
    {
        int n, abs;
        printf("n = ");
        scanf("%d", &n);
        if (n < 0)
        {
            abs = -n;
            printf("%d는 음수입니다.\n", n);
        }
        else
        {
            abs = n;
            if (n > 0)
                printf("%d는 양수입니다.\n", n);
            else
                printf("0입니다.\n");
        }
        printf("%d의 절댓값은 %d입니다.\n", n, abs);
        
        return 0;
        
    }