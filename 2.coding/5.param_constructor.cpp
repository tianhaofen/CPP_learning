/*************************************************************************
	> File Name: 5.param_constructor.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 11 Mar 2025 04:46:07 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public:
    A() : A(100, 1000) {}
    A(int x, int y) {
        this->x = x, this->y = y;
    }

    void output() {
        cout << "(" << this->x << ", " << this->y << ")" << endl;
    }
private:
    int x, y;
};


int main() {
    A a{10, 100}, b{20, 23};
    a.output();
    b.output();
    A c;
    c.output();

    return 0;
}
