//
// Created by Han on 2022/12/17.
//
#include<stdio.h>

float many(float use);

int main(void)  {
    float use;
    float much;
    printf("请输入用电量\n");
    scanf("%f",&use);
    much = many(use);

    if(much == 0)  {
        printf("Invalid Value!");
    }
    else{
        printf("cost = %.2f",much);
    }



    return 0;
}

float many(float use){
    float cost;

    if(use < 0)  {
        return 0;
    }
    if(use >= 0 && use <= 50)  {
        cost = 0.53 * use;
        return cost;
    }
    else  {
        cost = 50 * 0.53 + (use - 50) * 0.58;
        return cost;
    }

}