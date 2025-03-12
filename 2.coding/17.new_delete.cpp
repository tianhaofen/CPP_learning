/*************************************************************************
	> File Name: 17.new_delete.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 12 Mar 2025 08:40:28 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public:
    A(string msg) {
        cout << msg << " constructor" << endl;
    }
    ~A() {
        cout << "destructor" << endl;
    }
};

int main() {
    A *malloc_a = (A *)malloc(sizeof(A));
    free(malloc_a);
    A *new_a = new A("new");
    delete new_a;

    return 0;
}
