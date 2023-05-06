//
// Created by Han on 2023/5/5.
//
#include <iostream>
using namespace std;

const double PI = 3.1415926;
class Point
{
public:
    Point(int m = 0, int n = 0)
    {
        a = m;
        b = n;
    }
    virtual float GetArea() = 0;
protected:
    int a, b;
};
class Rect :public Point
{
public:
    Rect(int m, int n):Point(m,n) { }
    float GetArea();
protected:
};

float Rect::GetArea()
{
    return (a * b);
}
class Circle:public Point
{
public:
    Circle(int r) :Point(r) {  }
    float GetArea();
protected:
};

float Circle::GetArea()
{
    return (PI * a * a);
}

float fun(Point * p) {
    cout << p->GetArea() << endl;
}

int main() {
    Rect rect(4, 5);
    Circle circle(10);

    cout << "矩形的面积为：" << endl;
    fun(&rect);

    cout << "圆的面积为：" << endl;
    fun(&circle);

    return 0;
}