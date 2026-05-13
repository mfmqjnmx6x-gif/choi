#include <stdio.h>
int main(void)
{
    char a;

    printf("학점을 입력하시오:");
    scanf("%c",&a);

    switch (a) {
    case 'A':       print("아주 잘했어요!\n"); break;
    case 'B':       print("좋습니다.\n"); break;
    case 'C':       print("만족스럽습니다.\n"); break;
    case 'D':       print("더 노력해보세요.\n"); break;
    case 'F':       print("안타깝습니다.\n"); break;
    }
        return 0;
}
// 이 문제를 주고 도표를 만들 수 있어야 함  