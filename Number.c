//
// Created by Han on 2022/12/24.
//
#include <stdio.h>
#include <math.h>

int main(void)  {
    int N;
    int i;
    int bit,sum;
    int Ver1,Ver2,Ver3,Ver4,Ver5,Ver6,Ver7,Ver8,Ver9,Ver10;

    printf("请输入一个正整数：\n");
    scanf("%d",&N);
    if(N < 0 || N > 1000000000)  {
        printf("输入错误");
        return 0;
    }

    for(i = 10;i > 0;i--)  {
        bit = N / pow(10,i-1);
        if(bit > 0)  {
            printf("%d ",i);
            break;
        }
    }

    Ver1 = N % 10;
    Ver2 = N % 100 / 10;
    Ver3 = N % 1000 / 100;
    Ver4 = N % 10000 / 1000;
    Ver5 = N % 100000 / 10000;
    Ver6 = N % 1000000 / 100000;
    Ver7 = N % 10000000 / 1000000;
    Ver8 = N % 100000000 / 10000000;
    Ver9 = N % 1000000000 / 100000000;
    Ver10 = N % 10000000000 / 1000000000;
    sum = Ver1 + Ver2 + Ver3 + Ver4 + Ver5 + Ver6 + Ver7 + Ver8 + Ver9 + Ver10;
    printf("%d",sum);
}