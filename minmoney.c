//
// Created by Han on 2023/1/1.
//
#include <stdio.h>

int main(void)  {
    int N,i,j,temp;
    int a[100000];
    int sum = 0;

    printf("������һ����������");
    scanf("%d",&N);
    if(N < 0 || N > 10000)  {
        printf("�������");
    }

    //����N�������������
    for(i = 0;i < N;i++)  {
        printf("������һ����������");
        scanf("%d",&a[i]);
        sum += a[i];
    }

    //�Ӵ�С��������
    for(i = 1;i < N;i++)  {
        for(j = 0;j < N-i;j++)  {
            if(a[j] < a[j+1])  {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(i = 0;i < N;i++)  {
        //�ͼ�ȥÿ�����Сֵ
        if(i % 3 == 2)  {
            sum = sum - a[i];
        }
    }

    printf("������Ҫ��%dԪ",sum);
}