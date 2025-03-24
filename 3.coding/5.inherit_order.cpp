/*************************************************************************
	> File Name: 5.inherit_order.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 17 Mar 2025 04:11:38 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base {
public :
    Base() {
        cout << "Base constructor" << endl;
    }
    ~Base() {
        cout << "Base destructor" << endl;
    }
};

class A : public Base {
public:
    A() {
        data = new int[10];
        cout << "A constructor, data : " << data << endl;
    }
    ~A() {
        if (data != nullptr) delete[] data;
        cout << "A destructor, data done" << endl;
    }
    int *data;
};

class B : public Base {
public :
    B() {
        cout << "B constructor" << endl;
    }
    ~B() {
        cout << "B destructor" << endl;
    }
};

class C : public Base {
public :
    C() {
        cout << "C constructor" << endl;
    }
    ~C() {
        cout << "C destructor" << endl;
    }
};

void fun1() {
    cout << "fun1 : " << endl;
    A a;
    return ;
}

void fun2() {
    cout << "fun2 : " << endl;
    Base *p = new A();
    delete (A *)p;
    return ;
}

void func3() {
    cout << "func3 : " << endl;
    Base *p;
    switch (rand() % 3) {
        case 0: p = new A(); break;
        case 1: p = new B(); break;
        case 2: p = new C(); break;
    }
    delete p;

    return ;
}

int main() {
    srand(time(0));
    fun1();
    fun2();
    func3();

    return 0;
}
