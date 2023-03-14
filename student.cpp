//
// Created by Han on 2023/3/9.
//
#include<iostream>
using namespace std;

struct Student{
    int id;
    float one;
    float two;
    float three;
    float four;
    float five;
};

int main() {
    Student stu1,stu2,stu3,stu4;
    int id;
    float one,two,three,four,five;
    float avging(Student stu1,Student stu2,Student stu3,Student stu4);
    void no(Student stu);
    void good(Student stu);

    cout << "请依次输入第一个学生的学号和五门考试成绩" << endl;
    cin >> id >> one >> two >> three >> four >> five;
    stu1 = {id,one,two,three,four,five};
    cout << "请依次输入第二个学生的学号和五门考试成绩" << endl;
    cin >> id >> one >> two >> three >> four >> five;
    stu2 = {id,one,two,three,four,five};
    cout << "请依次输入第三个学生的学号和五门考试成绩" << endl;
    cin >> id >> one >> two >> three >> four >> five;
    stu3 = {id,one,two,three,four,five};
    cout << "请依次输入第四个学生的学号和五门考试成绩" << endl;
    cin >> id >> one >> two >> three >> four >> five;
    stu4 = {id,one,two,three,four,five};

    cout << "第一门课的平均分为：" << avging(stu1,stu2,stu3,stu4) << endl;
    no(stu1);
    no(stu2);
    no(stu3);
    no(stu4);
    good(stu1);
    good(stu2);
    good(stu3);
    good(stu4);
}

float avging(Student stu1,Student stu2,Student stu3,Student stu4) {
    float avg = (stu1.one + stu2.one + stu3.one + stu4.one) / 4;
    return avg;
}

void no(Student stu) {
    int count = 0;

    for(int i = 0;i < 4;i++) {
        if(stu.one < 60) {
            count++;
        }
        if(stu.two < 60) {
            count++;
        }
        if(stu.three < 60) {
            count++;
        }
        if(stu.four < 60) {
            count++;
        }
        if(stu.five < 60) {
            count++;
        }
    }

    if(count > 2) {
        cout << "有两门以上课程不及格的学生：" << stu.id << endl;
    }
}

void good(Student stu) {
    float avg = (stu.one + stu.two + stu.three + stu.four + stu.five) / 5;
    if( avg > 90) {
        cout << "平均成绩在90分以上学生：" << stu.id << endl;
    }else if(stu.one > 85 && stu.two > 85 && stu.three > 85 && stu.four > 85 && stu.five > 85) {
        cout << "全部课程成绩在85分以上的学生：" << stu.id << endl;
    }
}