/*************************************************************************
	> File Name: 3.override.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 24 Mar 2025 03:21:58 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

struct Base {
    virtual void test() {
        cout << "Base class test" << endl;
        return ;
    }
    virtual void foo() {
        cout << "Base class foo" << endl;
    }
};

struct A : Base {
    void test() {
        cout << "A class test" << endl;
        return ;
    }
    void foo() override{
        cout << "A class foo" << endl;
        return ;
    }
};

int main() {
    Base *p = new A();
    p->test();
    
    return 0;
}
