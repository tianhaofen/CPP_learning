/*************************************************************************
	> File Name: 1.inherit.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Sat 15 Mar 2025 11:08:56 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Animal {
public:
    Animal() = delete;
    Animal(string name) : name(name) {}

    void say() {
        cout << "My name is " << name << endl;
        return ;
    }
protected:
    string name;
};

class Cat : public Animal {
public :
    Cat(string name) : Animal(name) {}
    void running() {
        cout << "I can run with four legs" << endl;
    }
};
class Dog : public Animal {
public :
    Dog(string name) : Animal(name) {}
    void running() {
        cout << "I can run with four legs" << endl; 
    }
};
class Bat : public Animal {
public :
    Bat(string name) : Animal(name) {}
    void fly() {
        cout << "I can fly, I am " << this->name << endl;
    }
};

int main() {
    Cat a1("Garfield");
    Dog a2("Odie");
    Bat a3("Dracula");
    a1.say();
    a2.say();
    a3.say();
    a1.running();
    a2.running();
    a3.fly();

    return 0;
}
