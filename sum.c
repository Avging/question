//
// Created by Han on 2022/12/19.
//
#include <stdio.h>

int main(void)  {
    int a[10];
    int sum = 0;
    scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
    for(int i = 0;i < 10;i++)  {
        if(a[i] <= 0)  {
            return 0;
        }
        if(a[i] % 2 != 0)  {
            sum += a[i];
        }
    }
    printf("%d",sum);
}