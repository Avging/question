//
// Created by Han on 2022/12/23.
//
#include <stdio.h>

int main(void) {
    int N;
    int i;
    int a = 1;
    int sum = 0;

    printf("������һ����������\n");
    scanf("%d", &N);
    if (N < 0 || N > 12)  {
        printf("�������");
        return 0;
    }

    for (i = 1; i <= N; i++) {
            a *= i;
        sum += a;
    }
    printf("%d",sum);
}
