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

        complex operator+ (complex c) {
            Real = Real + c.Real;
            Imaginary = Imaginary + c.Imaginary;

            return complex(Real,Imaginary);
        }

        complex operator- (complex c) {
            Real = Real - c.Real;
            Imaginary = Imaginary - c.Imaginary;

            return complex(Real,Imaginary);
        }

        complex operator* (complex c) {
            Real = Real * c.Real;
            Imaginary = Imaginary * c.Imaginary;

            return complex(Real,Imaginary);
        }

        void display() {
            cout << Real << "+" << Imaginary << "i" << endl;
        }
};

int main() {
    complex Part1(3.4,5.6);
    complex Part2(6,8.8);

    complex A = Part1+Part2;
    complex B = Part1-Part2;
    complex C = Part1*Part2;

    A.display();
    B.display();
    C.display();

    return 0;
}