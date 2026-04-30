#include <stdio.h>

int main(void)
{
    int a,b,c,largest;

    printf("3개의 정수를 입력하시오:");
    scanf("%d %d %d", &a, &b, &c);

    largest=a;
    if(largest<b) largest=b;
    if(largest<c) largest=c;
    printf("가장 큰 정수는 %d이다.\n",largest);
    return 0;
}

//