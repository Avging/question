//
// Created by Han on 2023/4/11.
//
#include <iostream>
using namespace std;
class Object
{
public:
    Object()
    {
        cout << "Object构造函数" << endl;
        weight = 0;
    }
    ~Object()
    {
        cout << "Object析构函数" << endl;
    }
    int getWeight() { return weight; }
    void setWeight(int w)
    {
        weight = w;
    }
private:
    int weight;
};
class Box : public Object
{
public:
    Box()
    {
        cout << "Box构造函数" << endl;
        height = 0;
        width = height;
    }
    ~Box()
    {
        cout << "Box析构函数" << endl;
    }
    int getHeight()
    {
        return height;
    }
    void setHeight(int h)
    {
        height = h;
    }
    int getWidth()
    {
        return width;
    }
    void setWidth(int w)
    {
        width = w;
    }
private:
    int height;
    int width;
};
int main()
{
    Box a;
    return 0;
}
