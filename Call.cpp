//
// Created by Han on 2023/4/3.
//
#include<iostream>
using namespace std;

int fun() {
    static  int n = 0;
    return  ++n;
}

int main() {
    int count = 0;
    for(int i = 0;i < 10;i++) {
        count =  fun();
    }

    cout << count;
}