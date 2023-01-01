//
// Created by Han on 2023/1/1.
//
#include <stdio.h>

int main(void)  {
    int N,i,j,temp;
    int a[100000];
    int sum = 0;

    printf("请输入一个正整数：");
    scanf("%d",&N);
    if(N < 0 || N > 10000)  {
        printf("输入错误");
    }

    //输入N个正整数并求和
    for(i = 0;i < N;i++)  {
        printf("请输入一个正整数：");
        scanf("%d",&a[i]);
        sum += a[i];
    }

    //从大到小进行排序
    for(i = 1;i < N;i++)  {
        for(j = 0;j < N-i;j++)  {
            if(a[j] < a[j+1])  {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(i = 0;i < N;i++)  {
        //和减去每组的最小值
        if(i % 3 == 2)  {
            sum = sum - a[i];
        }
    }

    printf("最少需要花%d元",sum);
}