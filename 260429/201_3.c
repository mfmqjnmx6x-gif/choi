#include <stdio.h>
int main(void)
{
    int a;
    printf("요일을 0(일요일)에서 6까지의 정수로 입력하시오:");
    scanf("%d",&a);

    if (a==0||a==6) //중요
        printf("주말입니다.\n");
    else
        printf("주중입니다.\n");
    return 0;

}