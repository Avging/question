//
// Created by Han on 2022/12/25.
//
#include <stdio.h>

int main(void)  {
    int m,n;
    int i,j;
    int sum;

    printf("������������������");
    scanf("%d%d",&m,&n);
    if(m <= 1 || n > 10000 || m > n)  {
        printf("�������");
        return 0;
    }

    for(i = m;i <= n;i++)  {
        sum = 0;
        for(j = 1;j < i;j++)  {
            if(i % j == 0)  {
                sum += j;
            }
        }
        if(sum == i)  {
            printf("%d\n",i);
        }
    }
}