//
// Created by Han on 2022/12/16.
//
#include <stdio.h>
#include <math.h>

int main(void)  {
    int Ver1,Ver2,Ver3,Ver4,Ver5,Ver6,Ver7;
    int N;
    int i;
    int sum,min,max;

    printf("请输入位数：\n");
    scanf("%d",&N);
    if(N < 3 || N > 7)   {
        printf("输入错误");
        return 0;
    }
    min = pow(10,N-1);
    max = pow(10,N) - 1;

    for(i = min;i <= max;i++)  {
        Ver1 = i % 10;
        Ver2 = i % 100 / 10;
        Ver3 = i % 1000 / 100;
        Ver4 = i % 10000 / 1000;
        Ver5 = i % 100000 / 10000;
        Ver6 = i % 1000000 / 100000;
        Ver7 = i % 10000000 / 1000000;
        sum = pow(Ver1,N) + pow(Ver2,N) + pow(Ver3,N) + pow(Ver4,N) + pow(Ver5,N) + pow(Ver6,N) + pow(Ver7,N);

        if(i == sum)  {
            printf("%d\n",i);
        }
    }
}

