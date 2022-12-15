//
// Created by Han on 2022/12/15.
//
#include <stdio.h>

void change1(int score);
void change2(int score);

int main(void)  {
    int score;
    scanf("%d",&score);
    //change1(score);
    change2(score);

    return 0;
}

void change1(int score)  {
    if(score >= 90 && score <= 100)  {
        printf("A");
    }
    if(score >= 80 && score < 90)  {
        printf("B");
    }
    if(score >= 70 && score < 80)  {
        printf("C");
    }
    if(score >= 60 && score < 70)  {
        printf("D");
    }
    if(score >= 0 && score < 60)  {
        printf("E");
    }

}

void change2(int score)  {
    int score1;
    score1 = score / 10;

    switch(score1)  {

        case 10:
            printf("A");
            break;
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("E");
            break;
    }

}