//
// Created by Han on 2023/3/13.
//
#include<iostream>
using namespace std;

int main() {
    int count;

    cout << "1000以内的素数:" << endl;
    for (int i = 2; i <= 1000; i++) {
        count = 0;
        for (int j = 2; j < (i/2); j++) {
            if (i % j == 0) {
                count++;
                break;
            }
        }

        if(count == 0) {
            cout << i << "是素数" << endl;
        }
    }
    return 0;
}