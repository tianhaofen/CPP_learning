/*************************************************************************
	> File Name: 8.HZOJ-166.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 23 Dec 2024 09:47:56 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main() {
    string a, b;
    int x;
    cin >> a >> x >> b;
    cout << min((int)a.size(), 100) << endl;
    a.insert(x - 1, b);
    cout << a << endl;
    cout << a.size() - a.rfind('x') << endl;

    return 0;
}
