/*************************************************************************
	> File Name: 28.less_operator.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 13 Mar 2025 07:46:41 PM CST
 ************************************************************************/

#include<iostream>
#include<map>
using namespace std;

class A {
public:
    A(int x = 0) : x(x) { }
    bool operator<(const A &a) const {
        return x < a.x;
    }
    bool operator>(const A &a) const {
        return a < *this;
    }
    bool operator==(const A &a) const {
        return !(*this < a) && !(a < *this);
    }
    bool operator!=(const A &a) const {
        return !(*this == a);
    }
    bool operator>=(const A &a) const {
        return (a < *this) || (a == *this);
    }
    bool operator<=(const A &a) const {
        return (*this < a) || (a == *this);
    }
    int x;
};

map<A, int> h;

#define P(stmt) {\
    cout << #stmt << " : " << (stmt) << endl;\
}

int main() {
    A a(3), b(4);
    h[a] = 123;
    cout << h[a] << endl;
    P(a < b);
    P(a > b);
    P(a == b);
    P(a != b);
    P(a >= b);
    P(a <= b);

    return 0;
}
