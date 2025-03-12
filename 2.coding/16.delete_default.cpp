/*************************************************************************
	> File Name: 16.delete_default.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 12 Mar 2025 08:30:10 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A() = default;
    A(const A &) = delete;
    A(int) {}
    ~A() = default;
private:


};

int main() {
    A a;

    return 0;
}
