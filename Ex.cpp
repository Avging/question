//
// Created by Han on 2023/3/24.
//
#include<iostream>
using namespace std;

class Ex
{
public:
    Ex(int x, char c = 'c');
    ~Ex()
    {   cout <<da<<endl;  }
    void outdata(void)
    {  cout << ch << " " << da <<endl;  }
private:
    int	da;
    char	ch;
};
Ex::Ex(int x, char c):da(x), ch(c)
{
    cout <<da<<endl;
}

int main()
{
    Ex	x(3,'a'), y(1);
    Ex  z[2] = {Ex(10,'a'), Ex(1,'d')};
    x.outdata();
    y.outdata();
    z[0].outdata();
}