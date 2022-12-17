//
// Created by Han on 2022/12/17.
//
#include <stdio.h>

void many(float use);

int main(void)  {
    float use;
    printf("请输入用电量\n");
    scanf("%f",&use);
    many(use);

    return 0;
}

void many(float use){
    float cost;
    float cost1;
    cost = 0.53 * use;
    cost1 = 50 * 0.53 + (use - 50) * 0.58;

    if(use >= 0 && use <= 50)  {
        printf("cost = %.2f",cost);
    }
    if(use > 50)  {
        printf("cost = %.2f",cost1);
    }
    if(use < 0)  {
        printf("Invalid Value!");
    }
}