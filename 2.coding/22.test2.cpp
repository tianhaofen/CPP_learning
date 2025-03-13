/*************************************************************************
	> File Name: 21.test1.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 13 Mar 2025 04:06:48 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public :
    A() {
        cout << "constructor" << endl;
    }
    void destroy() {
        delete this;
        return ;
    }
private:
    ~A() {
        cout << "destructor" << endl;
    }
    friend void function_test();
};

void function_test() {
    A a;
    return ;
}

int main() {
    A *pa = new A();
    pa->destroy();
    function_test();

    return 0;
}
