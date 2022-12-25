//
// Created by Han on 2022/12/24.
//
#include <stdio.h>
#include <math.h>

int main(void)  {
    int N;
    int i;
    int bit,sum;
    int Var1,Var2,Var3,Var4,Var5,Var6,Var7,Var8,Var9,Var10;

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

    Var1 = N % 10;
    Var2 = N % 100 / 10;
    Var3 = N % 1000 / 100;
    Var4 = N % 10000 / 1000;
    Var5 = N % 100000 / 10000;
    Var6 = N % 1000000 / 100000;
    Var7 = N % 10000000 / 1000000;
    Var8 = N % 100000000 / 10000000;
    Var9 = N % 1000000000 / 100000000;
    Var10 = N % 10000000000 / 1000000000;
    sum = Var1 + Var2 + Var3 + Var4 + Var5 + Var6 + Var7 + Var8 + Var9 + Var10;
    printf("%d",sum);
}