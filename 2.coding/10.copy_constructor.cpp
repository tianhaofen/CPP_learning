/*************************************************************************
	> File Name: 10.copy_constructor.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 12 Mar 2025 03:54:32 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public:
    A() : x(0), y(1) {
        cout << this << " default constructor" << endl;
    };
    A(const A &a) : x(a.x), y(a.y) {
        cout << this << " copy constructor" << endl;
    }
    void operator=(const A &a) {
        cout << this << " operator=" << endl;
    }
    void output() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
private:
    int x, y;
};

int main() {
    A a, b = a;
    b = a;
    cout << "a : " << &a << endl;
    cout << "b : " << &b << endl;
    a.output();
    b.output();

    return 0;
}
