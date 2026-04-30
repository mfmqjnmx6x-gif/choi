#include <stdio.h>
int main(void)
{
    char a;

    printf("문자를 입려하시오:");
    scanf("%c",&a);

    if (a>='A'&& a<='Z')
        printf("대문자 입니다.\n");
    else if (a>='a'&& a<='z')
        printf("소문자 입니다.\n");
    else
        printf("알파벳이 아닙니다.\n");

    return 0;
}