//
// Created by Han on 2023/3/28.
//
#include<iostream>
using namespace std;

class complex {
    private:
        double Real,Imaginary;
    public:
        complex(double real,double imaginary) {
            Real = real;
            Imaginary = imaginary;
        }

        void add(complex a) {
            Real = Real + a.Real;
            Imaginary = Imaginary + a.Imaginary;
        }

        void display() {
            cout << Real << "+" << Imaginary << "i" << endl;
        }
};

int main() {
    complex Part1(3.4,5.6);
    complex Part2(6,8.8);

    Part1.add(Part2);
    Part1.display();

    return 0;
}