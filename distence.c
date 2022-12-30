//
// Created by Han on 2022/12/30.
//
#include <stdio.h>
#include <math.h>

double dist(double x1,double y1,double x2,double y2)  {
    double w,h;
    w = pow(x1 - x2,2);
    h = pow(y1 - y2,2);
    return sqrt(w+h);
}

int main(void)  {
    double x1,y1,x2,y2;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    printf("dist = %.2f\n",dist(x1,y1,x2,y2));
}