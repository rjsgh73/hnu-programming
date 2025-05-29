#include <stdio.h>
// int main(void){
//     char ch;
//     printf ("\"큰따옴표로 둘러싸기\"\n");
//     return 0;
// }

// int main(void){
//     char ch;
//     printf("\t000\t");
//     return 0;
// }

// int main(void){
//     int x =333;
//     char str[10] = "abc";

//     printf("0123456789\n");
//     printf("-----------\n");

//     printf("%d\n",333);
//     printf("%5d\n",333);
//     printf("%05d\n",333);
    
//     printf("%s\n", str);
//     printf("%5s\n", str);
// }

// int main(void){
//     int kor1=50, eng1=5, math1=10, sci1=95;
//     int kor2=85, eng2=100, math2=80, sci2=72;

//     printf("귝어 영어 수학 과학\n");
//     printf("======================\n");
//     printf("%4d %4d %4d %4d\n",kor1,eng1, math1, sci1);
//     printf("%4d %4d %4d %4d\n",kor2, eng2, math2,sci2);
// }

// int main(void){
    // double dbl=123.456789010;
    // printf("%.3lf\n", dbl);
// }

// int main(void){
//     double x=12.34;
//     double y=5.67;
//     double z=x+y;
    
//     double a=1.2;
//     double b=0.345;
//     double c=a+b;

//     printf("%lf+%lf=%lf\n",x,y,z);
//     printf("%lf+%lf=lf\n",a,b,c);
//     return 0;
// }

int main(void){
    int nums[5]={1,2,3,4,5};
    for (int i=0; i<5; i++){
        printf("%d",nums[i]);
    }
    printf("\n");
}