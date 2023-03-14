//
// Created by Han on 2023/3/9.
//
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main() {
    char a[100];
    cout << "请输入一个字符串" << endl;
    cin >> a;
    cout << "output：";

    for(int i = strlen(a) - 1;i >= 0;i--) {
        cout << a[i];
    }
    cout << endl;

    string c = a;
    // cout << "inputString：";
    // cin >> c;
    cout << "outputString：";
    reverse(c.begin(),c.end());
    cout << c;

    return 0;
}

