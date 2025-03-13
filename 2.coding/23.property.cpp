/*************************************************************************
	> File Name: 23.property.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 13 Mar 2025 04:18:27 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class People {
public :
    People() {
        cnt += 1;
    }
    string name;
    static int cnt;
    ~People() {
        cnt -= 1;
    }
};

int People::cnt = 0;

void f() {
    People a, b;
    cout << "cnt : " << People::cnt << endl;
    return ;
}

int main() {
    People a, b;
    cout << "cnt : " << People::cnt << endl;
    People c;
    cout << "cnt : " << People::cnt << endl;
    f();
    cout << "cnt : " << People::cnt << endl;

    return 0;
}
