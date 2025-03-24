/*************************************************************************
	> File Name: 4.final.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 24 Mar 2025 03:39:48 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

struct Base {
    virtual void test() {
        cout << "Base" << endl;
        return ;
    }
};

struct A : Base {
    void test() final {
        cout << "A" << endl;
        return ;
    }
};

struct B : A {
    //void test() override {
       // cout << "B" << endl;
        //return ;
    //}
};

int main() {
    Base *p = new A();
    p->test();

    return 0;
}
