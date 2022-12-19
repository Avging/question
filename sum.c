//
// Created by Han on 2022/12/19.
//
#include <stdio.h>

int main(void)  {
    int a[100];
    int sum = 0;

    for(int i = 0;i < 100;i++)  {
        scanf("%d",&a[i]);
        if(a[i] <= 0)  {
            break;
        }
        if(a[i] % 2 != 0)  {
            sum += a[i];
        }
    }
    printf("%d",sum);
}