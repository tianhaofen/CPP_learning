/*************************************************************************
	> File Name: 9.diamond_inherit.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 21 Mar 2025 02:51:41 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public :
    int x;
};

class B : virtual public A {
public:
    void set_x(int x) {
        this->x = x;
        return ;
    }
};

class C : virtual public A {
public:
    int get_x() {
        return this->x;
    }
};

class D : public B, public C {};

int main() {
    D obj;
    obj.set_x(3);
    cout << obj.get_x() << endl;

    return 0;
}
