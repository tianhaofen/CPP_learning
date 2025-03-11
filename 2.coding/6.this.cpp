/*************************************************************************
	> File Name: 6.this.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 11 Mar 2025 06:33:39 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A() : A(0, 0){
        cout << this << " : default constructor" << endl;
    }
    A(int x, int y) {
        cout << this << " : param constructor" << endl;
        this->x = x, this->y = y;
    }
    void output() {
        cout << this << " : call function" << endl;
        cout << this->x << ", " << this->y << endl;
        return;
    }
private:
    int x, y;
};

int main() {
    A a{10, 101}, b;
    cout << "a : " << &a << endl;
    cout << "b : " << &b << endl;
    a.output();
    b.output();
    a.output();

    return 0;
}
