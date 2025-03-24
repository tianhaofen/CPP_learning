/*************************************************************************
	> File Name: 32.pointer_object.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 14 Mar 2025 04:04:22 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public:
    int x, y;
};

ostream &operator<<(ostream &out, const A &a) {
    out << "(" << a.x << ", " << a.y << ")";
    return out;
}

class Pointer_A {
public:
    Pointer_A(A *p) : p(p) {}
    A *operator->() {
       return p; 
    }
    A &operator*() {
        return *p;
    }
    A *p;
};

int main() {
    A a; 
    Pointer_A p= &a;
    p->x = 3;
    p->y = 4;
    cout << *p << endl;

    return 0;
}
