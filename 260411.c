//시각:2 30 00
//시각2:4 20 30 입력시


#include <stdio.h>
int main(void)


{
    int h1,m1,s1;
    int h2,m2,s2;
    int a,b;
    int x,xh,xm,xs;
    int y,yh,ym,ys;

    printf("시각1의 시간 분 초를 입력하시오:");
    scanf("%d %d %d",&h1,&m1,&s1); //1 10 10

    printf("시각2의 시간 분 초를 입력하시오:");
    scanf("%d %d %d",&h2,&m2,&s2); //1 10 20

    a = h1*60*60+m1*60+s1; //3600+600+10=4210
    b = h2*60*60+m2*60+s2; //3600+600+20=4220

    if (a>b){
        x = (a-b);
        xh = x/3600;
        xm = (x-(xh*3600))/60;
        xs = (x-(xh*3600)-(xm*60))/1;
        printf("시각1과 시각2는 %d시간 %d분 %d초 차이입니다.\n",xh,xm,xs);

    } else {
        y = (b-a); //10
        yh = y/3600; //0
        ym = (y-(yh*3600))/60; //0
        ys = (y-(yh*3600)-(ym*60))/1; //10
        printf("시각1과 시각2는 %d시간 %d분 %d초 차이입니다.\n",yh,ym,ys);
    }

    return 0;

}