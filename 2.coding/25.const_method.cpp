/*************************************************************************
	> File Name: 25.const_method.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 13 Mar 2025 04:44:57 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public:
    A(int x, int y) : x(x), y(y), z(0) {}
    void output() const {
        z += 1;
        cout << x << ", " << y << ", " << z << endl;
        return ;
    }
    int x, y;
    mutable int z;
};

int main() {
    const A a(3, 4);
    a.output();
    a.output();
    a.output();

    return 0;
}
