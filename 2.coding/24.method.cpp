/*************************************************************************
	> File Name: 24.method.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 13 Mar 2025 04:33:38 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class People {
public:
    void say() {
        cout << "sat something : " << this << endl;
    }
    static void say2() {
        cout << "class method : say somthing" << endl;
        return ;
    }

};

int main() {
    People a;
    a.say();
    a.say2();
    People::say2();

    return 0;
}
