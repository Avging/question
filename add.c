//
// Created by Han on 2022/12/23.
//
#include <stdio.h>

int main(void) {
    int N;
    int i;
    int a = 1;
    int sum = 0;

    printf("请输入一个正整数：\n");
    scanf("%d", &N);
    if (N < 0 || N > 12)  {
        printf("输入错误");
        return 0;
    }

    for (i = 1; i <= N; i++) {
            a *= i;
        sum += a;
    }
    printf("%d",sum);
}
