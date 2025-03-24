/*************************************************************************
	> File Name: 7.inherit_permission.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 21 Mar 2025 10:43:17 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base {
public:
    int public_x;
protected:
    int protected_x;
private:
    int private_x;
};

class A : protected Base {
public : 
    void set() {
        this->public_x = 3;
        this->protected_x = 3;
        this->private_x = 3;
        return ;
    }
};

class B : public A {
public:
    void set() {
        this->public_x = 3;
        this->protected_x = 3;
        this->private_x = 3;
        return ;
    }
};

int main() {
    A a;
    a.public_x = 3;
    a.protected_x = 3;
    a.private_x = 3;

    return 0;
}
