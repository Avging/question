//
// Created by Han on 2022/12/17.
//
#include <stdio.h>

float many(float use);

int main(void)  {
    float use;
    float much;
    printf("�������õ���\n");
    scanf("%f",&use);
    much = many(use);
    if(much == 0)  {
        printf("Invalid Value!");
    }
    if(much <= 50 * 0.53)  {
        printf("cost = %.2f",much);
    }
    else{
        printf("cost = %.2f",much);
    }



    return 0;
}

float many(float use){
    float cost;
    float cost1;

    if(use < 0)  {
        return 0;
    }
    if(use >= 0 && use <= 50)  {
        cost = 0.53 * use;
        return cost;
    }
    else  {
        cost1 = 50 * 0.53 + (use - 50) * 0.58;
        return cost1;
    }

}