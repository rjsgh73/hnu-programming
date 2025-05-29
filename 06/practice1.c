/* #include<stdio.h>
int main(void){
    char ch;
    printf("문자 한 개 입력 >> ");
    scanf("%c", &ch, 1);
    printf("입력 받은 문자는 %c 입니다.\n", ch);
    return 0;
}*/

// #include <stdio.h>

// int main(void) {
//     char ch;
//     printf("문자 한 개 입력 >> ");
//     scanf("%c", &ch, 1);  // 잘못된 '1' 인자 제거
//     printf("입력 받은 문자는 %c 입니다.\n", ch);
//     return 0;
// }

#include <stdio.h>
int main(void) {
    char age_group; // A/C
    printf("A/C >> ");
    scanf("%c",&age_group);

    switch(age_group){
        case 'A':
        case 'a':
            printf("A(성인) 입니다.\n");
        break;
        
        case 'B':
        case 'b':
            printf("B(미성년자)) 입니다.\n");
        break;
        
        default:
            printf("잘못입력했습니다.\n");
        break;
        
    }
    return 0;
}