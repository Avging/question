//
// Created by Han on 2023/4/17.
//
#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "I am A" << endl;
    }

    ~A() {
        cout << "delect A" << endl;
    }
};

class B : public A{
public:
    B() {
        cout << "I am B" << endl;
    }

    ~B() {
        cout << "delect B" << endl;
    }
};

int main() {
    B b;
}