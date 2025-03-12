/*************************************************************************
	> File Name: 11.deep_copy.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 12 Mar 2025 04:35:41 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Array {
public:
    Array() : n(10), data(new int[n]) {
        for (int i = 0; i < n; i++) data[i] = 0;
    }
    void set(int ind, int val) {
        data[ind] = val;
    }
    Array(const Array &a) : n(a.n), data(new int[n]) {
        cout << this << " copy constructor" << endl;
        for (int i = 0; i < a.n; i++) {
            data[i] = a.data[i];
        }
    }
    Array(Array &&a) : n(a.n), data(a.data) {
        cout << this << " move contructor" << endl;
        a.n = 0;
        a.data = nullptr;
    }
    int size() { return n; }
    void output() {
        for (int i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
        cout <<endl;
        return ;
    }
    void outputdata() {
        cout << &this->data[0] << endl;
        return ;
    }
    Array duplicate() {
        return Array(*this);
    }
private:
    int n, *data;
};

int main() {
    Array a, b = a.duplicate();
    Array c;
    cout << "a : " << &a << endl;
    cout << "b : " << &b << endl;
    Array d = std::move(c);
    return 0;
}
