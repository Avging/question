//
// Created by Han on 2022/12/16.
//
#include <stdio.h>
#include <math.h>

int main(void)  {
    int Var1,Var2,Var3,Var4,Var5,Var6,Var7;
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
        Var1 = i % 10;
        Var2 = i % 100 / 10;
        Var3 = i % 1000 / 100;
        Var4 = i % 10000 / 1000;
        Var5 = i % 100000 / 10000;
        Var6 = i % 1000000 / 100000;
        Var7 = i % 10000000 / 1000000;
        sum = pow(Var1,N) + pow(Var2,N) + pow(Var3,N) + pow(Var4,N) + pow(Var5,N) + pow(Var6,N) + pow(Var7,N);

        if(i == sum)  {
            printf("%d\n",i);
        }
    }
}

