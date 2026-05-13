#include <stdio.h>
int amin(void)
{
    char color;

    printf("신호등의 색깔 입력 (R,G,Y):");
    scanf("%c",&color);

    if (color=='r'||color=='R')
        printf("정지!\n");
    else
        if (color=='y'||color=='Y')
            printf("주의!\n");
        else
            if (color=='g'||color=='G')
                printf("진행!\n");
            else
            printf ("INVALID COLOR!\n");

    return 0;
}