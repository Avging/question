//
// Created by Han on 2022/12/28.
//
#include <stdio.h>

double P(int n,double x)  {
    double sum;

    if(n == 0)  {
        return 1;
    }
    if(n == 1)  {
        return x;
    }else  {

    }

}

int main(void)  {
    int n;
    double x;

    scanf("%d%lf",&n,&x);
    printf("%.2f\n",P(n,x));
}