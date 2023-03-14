//
// Created by Han on 2022/12/27.
//
#include <stdio.h>

int main(void)  {
    long int T[10000];
    int n;
    int i;
    T[0] = 0;
    T[1] = 1;
    T[2] = 1;

    printf("请输入一个正整数:");
    scanf("%d",&n);
    if(n < 2 || n > 10000)  {
        printf("输入错误");
        return 0;
    }

    for(i = 3;i < 10000;i++)  {
        T[i] = T[i-1] + T[i-2] + T[i-3];
        if(i == n)  {
            printf("%ld",T[i]);
            break;
        }
    }

}