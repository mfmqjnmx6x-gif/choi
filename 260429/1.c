#include <stdio.h>
int main (void)
{
    int n;

    printf("정수를 입력하시오:");
    scanf("%d",&n);

    if (n >= 0 && n <= 100)
        printf("입력한 정수가 0에서 100 사이에 있습니다.\n");
    else
        printf("입력한 정수가 0에서 100 사이에 있습니다.\n");

    return 0;
}
