//
// Created by Han on 2022/12/21.
//
#include <stdio.h>

int main(void)  {
    int n;
    int a[100];
    int i,min;

    printf("������һ����������\n");
    scanf("%d",&n);
    if(n <= 0)  {
        printf("�������");
        return 0;
    }

    scanf("%d",&a[0]);
    for(i = 1;i < n;i++)  {
        scanf("%d",&a[i]);
        if(a[i] > a[i-1])  {
            a[i] = a[i-1];
        }
        min = a[i];
    }
    printf("min = %d",min);
}