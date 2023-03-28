//
// Created by Han on 2023/3/28.
//
#include<iostream>
#include<cmath>
using namespace std;

class Squace {
    private:
        int length;
    public:
        Squace(int l) {
            length = l;
        }
        ~Squace(){}
        int Area() {
            return pow(length,2);
        }
        int Perimeter() {
            return 4 * length;
        }
};

int main() {
    int s;
    int b;
    int price;

    cout << "请输入中间草坪的边长: " << endl ;
    cin >> s;
    b = s + 6;
    Squace side1(b);
    Squace side2(s);

    price = ((side1.Area() - side2.Area()) * 70) + (side2.Area() * 150) + (side1.Perimeter() * 100);
    cout << "整个活动场地的造价为: " << price << "元";

}