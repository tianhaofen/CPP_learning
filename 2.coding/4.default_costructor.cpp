/*************************************************************************
	> File Name: 4.default_costructor.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 11 Mar 2025 04:26:13 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public:
    A() {
        cout << "default constructor" << endl;
        x = 10, y = 100;
    }
    void output() {
        cout << "(" << x << ", " << y << ")" << endl;
        return ;
    }
private:
    int x, y;

};

int main() {
    A a;
    a.output();
    A b{};
    //b()
    b.output();

    return 0;
}

//A b() {
  //  cout << "hello function b" << endl;
    //return A();
//}
