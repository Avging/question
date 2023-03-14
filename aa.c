//
// Created by Han on 2023/1/2.
//
#include<stdio.h>

int fun(int a[10],int nLength)  {  
    int i;
    int maxNum = a[0];

    for(i = 0;i < nLength;i++)  {
        if(maxNum < a[i])  {
            maxNum = a[i];
        }
    }
    return maxNum;
}

int main(void) {
    int a[5] = {12, 3, 45, 6, 7};
    int b[6] = {23, 45, 12, 76, 4, 6};

    printf("%d\n", fun(a, 5));
    printf("%d\n", fun(b, 6));
}