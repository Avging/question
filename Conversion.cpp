//
// Created by Han on 2023/3/13.
//
#include<iostream>
#include <cmath>
using namespace std;

int main() {
    void conversion(string str);
    string str;

    cout << "请输入一个十六进制数：" << endl;
    cin >> str;
    conversion(str);
}

void conversion(string str) {
    int x,sum;
    int j = 0;
    int n = str.length();
    for (int i = 0;i < str.length();i++) {
        if (str[i] - '0' >= 0 && str[i] - '0' <= 9) {
            sum += str[i] * pow(16,n - 1 - i);
        } else {
            x = str[i] - 'A' + 10;
            sum += x * pow(16,n - 1 - i);
        }
    }

    cout << "该数的十六进制数为：" << sum;
}