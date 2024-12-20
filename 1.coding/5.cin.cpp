/*************************************************************************
	> File Name: 5.cin.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 20 Dec 2024 04:45:37 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << "a = " << a << endl;
    double b;
    char c[100];
    cin >> a >> b >> c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    while (cin >> a){
        cout << "EOF read : a ="<< a << endl;
    }

    return 0;
}
