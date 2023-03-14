//
// Created by Han on 2023/3/9.
//
#include<iostream>
using namespace std;

int main() {

    int max(int a,int b,int c = 0);

    int a,b,c;
    cout << "请输入三个正整数" << endl;
    cin >> a >> b >> c;
    cout << "max_3 = " << max(a,b,c) << endl;
    cout << "max_2 = " << max(a,b)  <<endl;

    return 0;
}

int max(int a,int b,int c) {
    if(b > a) {
        a = b;
    }
    if(c > a) {
        a = c;
    }

    return a;
}