#include <stdio.h>
int main(void)
{
    int math, phy, chem;
    printf("수학, 물리, 화학 점수를 한줄에 입력하시오:");
    scanf("%d %d %d, &math, &phy &chem");

    if (math>=50 && phy>=50&&phy>=50 && chem >=50) {
        if (math>=50&&phy>=150||(math+chem)>=150)
            printf("가입할 수 있습니다.\n\n");
        else 
            printf("다음 기회에 가입해주세요.\n\n");
    }
    else {
        printf("다음 기회에 가입해주세요.\n\n");
    }
    return 0;
}