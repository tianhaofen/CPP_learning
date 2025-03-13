/*************************************************************************
	> File Name: 19.emplace_new.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 13 Mar 2025 02:22:17 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public :
    A() = delete;
    A(int x) : x(x) {
        data = new int[10];
        cout << "constructor" << endl;
    }
    void output() {
        cout << "x : " << x << endl;
    }
    ~A() {
        cout << "destructor" << endl;
        delete[] data;
    }
    int x, *data;
};

int main() {
    A *arr = (A *)malloc(sizeof(A) * 5);
    for (int i = 0; i < 5; i++) {
        new(arr + i) A(i);
    }
    for (int i = 0; i < 5; i++) {
        arr[i].output();
    }
    for (int i = 0; i < 5; i++) {
        arr[i].~A();
    }
    free (arr);

    return 0;
}
