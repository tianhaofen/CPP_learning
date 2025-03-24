/*************************************************************************
	> File Name: 6.call_father_constructor.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 17 Mar 2025 05:08:50 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base {
public:
    Base() : x(3) {
        cout << "Base default constructor" << endl;
    }
    Base(int x) : x(x){
        cout << "Base(int x) constructor" << endl;
    }
    Base(const Base &obj) {
        this->x = obj.x;
        cout << "Base copy constructor" << endl;
    }
    Base &operator=(const Base &obj) {
        this->x = obj.x;
        cout << "this is Base operator=" << endl;
        return *this;
    }
    int x;
};

class A : public Base {
public :
    A() : y(4) {
        cout << "A default constructor" << endl;
    }
    A(const A &obj) : Base(obj) {
        this->y = obj.y;
        cout << "A copy constructor" << endl;
    }
    A &operator=(const A &obj) {
        this->y = obj.y;
        this->Base::operator=(obj);
        return *this;
    }

    int y;
};

ostream &operator<<(ostream &out, const A &a){
    out << "class A(" << a.x << ", " << a.y << ")";
    return out;
}
int main() {
    A a, c;
    cout << "a : " << a << endl;
    cout << "c : " << c << endl;
    a.x = 1000, a.y = 999;
    c = a;
    cout << "after(c = a) c : " << c << endl;
    A b = a;
    cout << b << endl;

    return 0;
}
