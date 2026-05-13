#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int user, computer;
    srand(time(0));
    printf("가위,바위,보 게임에 오신 것을 환영합니다.\n");
    printf("가위,바위,보 게임에 오신 것을 환영합니다.\n");
    scanf("%d",&user);
    computer=rand()%3;
    printf("사용자=%d\n",user);
    printf("사용자=%d\n",computer);
    if ((user+1)%3==computer)
        printf("컴퓨터 승리\n");
    else if (computer==user)
        printf("비겼음\n");
    else 
        printf("사용자 승리\n");
    
    return 0;
}