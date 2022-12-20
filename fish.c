//
// Created by Han on 2022/12/20.
//
#include <stdio.h>

int main(void)  {
    int N;
    int n;
    scanf("%d",&N);
    n = N % 5;

    if(N > 1000)  {
        printf("输入错误");
        return 0;
    }

    if(n > 0 && n <= 3)  {
        printf("Fishing in day %d",N);
    }
    else  {
        printf("Drying in day %d",N);
    }
}
