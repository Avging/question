//
// Created by Han on 2023/4/3.
//
#include<iostream>
#include<string>
using namespace std;

class Employee {
    public:
        static int num ;
        string name;
        int age;
        string title;
        Employee(string name1,int age1,string title1) {
            num++;
            age = age1;
            name = name1;
            title = title1;
        }
};

int static num = 0;
