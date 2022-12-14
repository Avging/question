//
// Created by Han on 2022/12/14.
//
#include <stdio.h>

void count(int time1,int time2)  {
    int h1,h2,h3,h4;

    if(0000 < time1 < 2359 && 0000 < time2 < 2359)  {
        h1 = time1 / 100;
        h2 = time1 % 100;
        h3 = time2 / 100;
        h4 = time2 % 100;
    }
    else  {
        printf("输入错误，请重新输入");
    }

    if(h1 < h3 && h2 < h4)  {
        printf("%d:%d\n",h3 - h1,h4 - h2);
    }
    else  {
        printf("输入错误，请重新输入");
    }

}

int main(void)  {
    int time1;
    int time2;
    int h1,h2,h3,h4;

    printf("请输入2个4位正整数，第二个数大于第一个数\n");
    scanf("%d%d",&time1,&time2);
    count(time1,time2);

    return 0;
}