#include <stdio.h>

int main(void)
{
    int cnt_even = 0;
    int pos[5] = {3, 5, 7, 12, 24};

    for (int i = 0; i < 5; i++){
        if(pos[i]%2==0){
            cnt_even++;
        }
    }
    printf("=%d개", cnt_even);
}