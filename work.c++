//
// Created by Han on 2023/2/13.
//
#include<iostream>
using namespace std;

int main () {
    int n,m,a[1000];
    float b[1000];
    double c[1000];
    void sort(int a[],int n);
    void sort(float b[],int n);
    void sort(double c[],int n);

    cout << "请输入对几个数据进行排序" << endl;
    cin >> n;
    cout << "请输入数据类型" << endl << "1.整形" << endl << "2.单精度型" <<endl<< "3.双精度型" << endl;
    cin >> m;

    switch(m) {
        case 1:
            cout << "请输入" << n << "个整型的数" << endl;
            for(int i = 0;i < n ;i++) {
                cin >> a[i];
            }
            sort(a,n);
            break;
        case 2:
            cout << "请输入" << n << "个float类型的数" << endl;
            for(int i = 0;i < n ;i++) {
                cin >> b[i];
            }
            sort(b,n);
            break;
        case 3:
            cout << "请输入" << n << "个double类型的数" << endl;
            for(int i = 0;i < n ;i++) {
                cin >> c[i];
            }
            sort(c,n);
            break;
    }

    return 0;
}

void sort(int a[],int n) {
    int temp;

    for(int i = 0;i < n-1;i++) {
        for(int j = i+1;j < n;j++) {
            if(a[i] > a[j]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    for(int i = 0;i < n;i++) {
        cout << a[i] << "  ";
    }

}

void sort(float b[],int n) {
    float temp;


    for(int i = 0;i < n-1;i++) {
        for(int j = i+1;j < n;j++) {
            if(b[i] > b[j]) {
                temp = b[j];
                b[j] = b[i];
                b[i] = temp;
            }
        }
    }

    for(int i = 0;i < n;i++) {
        cout << b[i] << "  ";
    }

}

void sort(double c[],int n) {
    float temp;


    for(int i = 0;i < n-1;i++) {
        for(int j = i+1;j < n;j++) {
            if(c[i] > c[j]) {
                temp = c[j];
                c[j] = c[i];
                c[i] = temp;
            }
        }
    }

    for(int i = 0;i < n;i++) {
        cout << c[i] << "  ";
    }

}
