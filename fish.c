//
// Created by Han on 2022/12/20.
//
#include <stdio.h>

int main(void)  {
    int N;
    int n;

    printf("������һ��������:\n");
    scanf("%d",&N);

    if(N <= 0 || N > 1000)  {
        printf("�������");
        return 0;
    }

    n = N % 5;
    if(n > 0 && n <= 3)  {
        printf("Fishing in day %d",N);
    }else  {
        printf("Drying in day %d",N);
    }
}
