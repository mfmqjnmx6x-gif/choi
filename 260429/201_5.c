#include <stdio.h>
int main(void)
{
    char a;

    printf("문자를 입력하시오:");
    scanf("%c",&a);

    if (a>='A'&& a<='Z')
        printf("알파벳입니다.\n");
    else if (a>='0'&& a<='9')
        printf("숫자입니다.\n");
    else
        printf("특수문자입니다.\n");
    
    return 0;
}