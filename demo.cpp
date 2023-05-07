//
// Created by Han on 2023/5/6.
//

#include<iostream>
using namespace std;

class A{
public:
    A(int i):rl(i){ }
    A(const A& a):rl(a.rl){cout<<"copy" << endl;}
    A& operator=(const A& a){
        cout << "assign"<< endl;
        return *this;
    }
private:
    int rl;
};

int main(){
        A al(2);
        A am= al;
        A an(1);
        an = am;
        return 0;

}