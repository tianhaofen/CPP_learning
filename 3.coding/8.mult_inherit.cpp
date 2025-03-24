/*************************************************************************
	> File Name: 8.mult_inherit.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 21 Mar 2025 02:28:48 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base1 {};
class Base2 {};
class A : public Base1, protected Base2 {};

class Flyable {
public:
    void fly() {
        cout << "flying in the sky" << endl;
        return ;
    }
};

class Swimable {
public :
    void swim() {
        cout << "swimming in the sky" << endl;
        return ;
    }
};

class Duck : public Flyable, public Swimable {
public :
    void quack() {
        cout << "Quack, Ga Ga Ga" << endl;
        return ;
    }
};

int main() {
    Duck d;
    d.fly();
    d.swim();
    d.quack();

    return 0;
}
