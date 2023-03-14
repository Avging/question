//
// Created by Han on 2023/3/9.
//
#include<iostream>
using namespace std;

int main() {
    void sort(int &a,int &b,int &c);
    int a,b,c;
    cout << "请输入三个整数" << endl;
    cin >> a >> b >> c;

    sort(a,b,c);
    cout << a <<"  "<< b <<"  "<< c;

    return 0;
}

void sort (int &a,int &b,int &c) {
    int temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c) {
        temp = b;
        b = c;
        c = temp;
    }
}