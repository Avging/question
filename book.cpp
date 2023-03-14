//
// Created by Han on 2023/3/13.
//
#include<iostream>
using namespace std;

struct Book{
    string ISDN;
    string name;
    string author;
    float price;
};

int main() {
    Book a[5] = {{"98765f45","C++","lily",43},
                 {"98783m83","Java","Rose",25},
                 {"98784k31","Networking","Nancy",35},
                 {"98784y11","Operation system","Robort",48},
                 {"98784p23","Linux","Lisa",55}};

    for (int i = 0; i < 5; ++i) {
        if(a[i].price > 40) {
            cout << "书号：" << a[i].ISDN << "  " << "书名：" << a[i].name << "  " << "作者：" << a[i].author << "  " << "价格：" << a[i].price << endl;
        }
    }
}