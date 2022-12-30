//
// Created by Han on 2022/12/28.
//
#include <stdio.h>

double P(int n,double x)  {

    if(n == 0)  {
        return 1;
    }
    if(n == 1)  {
        return x;
    }
    if( n > 1)  {
        return ((2*n-1)*P(n-1,x) - (n-1)*P(n-2,x))/n;
    }

}

int main(void)  {
    int n;
    double x;

    scanf("%d%lf",&n,&x);
    printf("%.2f\n",P(n,x));
}