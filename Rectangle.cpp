//
// Created by Han on 2023/3/21.
//
#include<iostream>
using namespace std;

class Rectangle {
    public:
        double l;
        double width;
        Rectangle(double a,double b){
            l = a;
            width = b;
        }
        double getArea() {
            return l * width;
        }
};

int main() {
    double l;
    double width;
    cout << "请输入矩形的长和宽：" << endl;
    cin >> l;
    cin >> width;
    Rectangle a(l,width);

    cout << "矩形的面积为：" << endl;
    cout << a.getArea();
}