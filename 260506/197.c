#include <stdio.h>
int main(void)
{
    int tmp;
    printf("오늘의 기온을 입력하시오:");
    scanf("%d",&tmp);

    if (tmp<-10)        printf("매우추운 날씨입니다.\n"); 
    else if (tmp<0)        printf("추운 날씨입니다.\n"); 
    else if (tmp<10)        printf("쌀쌀한 날씨입니다.\n"); 
    else if (tmp<20)        printf("쾌적한 날씨입니다.\n"); 
    else if (tmp<30)        printf("더운 날씨입니다.\n"); 
    else        printf("무더운 날씨입니다.\n");     

    return 0;
}