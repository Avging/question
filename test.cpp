//
// Created by Han on 2023/4/17.
//
#include <iostream>
using namespace std;

class C {
public:
    void test() {
        cout << "test" ;
    }
};

int main() {
    C c;
    c.test();

    C* ci = new C();
    ci->test();
}