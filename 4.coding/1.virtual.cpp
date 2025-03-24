/*************************************************************************
	> File Name: 1.virtual.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 21 Mar 2025 04:50:13 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Animal {
public:
    virtual void run() {
        cout << "I don't know how to run" << endl;
        return ;
    }
};

class Cat : public Animal {
public:
    void run() override {
        cout << "I can run with four legs" << endl;
        return ;
    }
};



int main() {
    Cat c;
    Animal *p = &c;
    c.run();
    p->run();

    return 0;
}
