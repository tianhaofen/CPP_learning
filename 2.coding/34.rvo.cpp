/*************************************************************************
	> File Name: 34.rvo.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 14 Mar 2025 07:29:47 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public:
    A() {
        cout << this << " default constructor" << endl;
    }
    A(const A &a) {
        cout << this << " copy constructor" << endl;
    }
};

A f() {
    A temp;
    cout << "temp : " << &temp << endl;
    return temp;
}

int main() {
    A a = f();
    cout << "a : " << &a << endl;

    return 0;
}
