/*************************************************************************
	> File Name: 13.HZOJ172.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 23 Dec 2024 02:51:45 PM CST
 ************************************************************************/

#include<iostream>
#include<set>
#include<string>
using namespace std;

int main() {
    set<string> s;
    string name;
    for (int i = 0; i < 10; i++){
        cin >> name;
        s.insert(name);
    }
    for (auto x : s) {
        cout << x << endl;
    }

    return 0;
}
