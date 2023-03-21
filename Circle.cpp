//
// Created by Han on 2023/3/21.
//
#include<iostream>
#include <iomanip>
using namespace std;

class Circle{
    public:
        double PI = 3.14;
        double getArea(double radius) {
            return PI * radius * radius;
        }

        double getcircumference(double radius) {
            return 2 * PI * radius;
        }
};

int main() {
    double radius;
    cin >> radius;
    Circle a;
    cout << "面积：" << setiosflags(ios::fixed) << setprecision(4) << a.getArea(radius) << endl;
    cout << "周长：" << setiosflags(ios::fixed) << setprecision(4) << a.getcircumference(radius) << endl;
}