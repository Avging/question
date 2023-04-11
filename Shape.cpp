//
// Created by Han on 2023/4/10.
//
#include <iostream>

using namespace std;
const double PI = 3.1415926;
class Shape
{
public:
    Shape(int m = 0, int n = 0)
    {
        a = m;
        b = n;
    }
    virtual float GetArea() = 0;
protected:
    int a, b;
};
class Rect :public Shape
{
public:
    Rect(int m, int n);
    float GetArea();
protected:
};
Rect::Rect(int m, int n) :Shape(m, n)
{

}
float Rect::GetArea()
{
    return (a * b);
}
class Circle:public Shape
{
public:
    Circle(int r);
    float GetArea();
protected:
};
Circle::Circle(int r) :Shape(r)
{

}
float Circle::GetArea()
{
    return (PI * a * a);
}

int main()
{
    Rect rect(4, 5);
    Circle circle(10);
    Shape* p;
    p = &rect;
    cout << "矩形的面积为：" << endl;
    cout << p->GetArea() << endl;
    p = &circle;
    cout << "圆的面积为：" << endl;
    cout << p->GetArea() << endl;

    return 0;
}
