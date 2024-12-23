/*************************************************************************
	> File Name: 9.HZOJ-167.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 23 Dec 2024 10:03:11 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main() {
    string a, b;
    int x;
    cin >> a >> x >> b;
    cout << a.size() << endl;
    cout << a.find('a') + 1 << endl;
    a.insert(x - 1, b);
    cout << a << endl;

    return 0;
}
