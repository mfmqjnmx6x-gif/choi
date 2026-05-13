#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("삼각형의 세변 입력:");
    scanf("%d%d%d",&a,&b,&c);

    //삼각형의 유효성 확인
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
        printf("유효한 삼각형.\n");
    else 
        printf("유효한 삼각형이 아닙니다.\n");
    
    return 0;
}