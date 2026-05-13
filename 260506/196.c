#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,b,c;
    double d,x1,x2;

    printf("계수 a,b,c를 입력하시오:");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4.0*a*c;
    if (d==0){     }
        else if (d>0) {
            x1=(-b+sqrt(d))/(2.0*a);
            x2=(-b-sqrt(d))/(2.0*a);
            printf("첫 번째 실근=%f\n,x1"); 
            printf("두 번째 실근=%f\n,x2");
    }
    else printf("허수근입니다.\n")
    
    return 0;
}