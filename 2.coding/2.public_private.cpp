/*************************************************************************
	> File Name: 2.public_private.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 11 Mar 2025 03:13:18 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class People {
public:
    string name;
    int age;

private:
    string name2;
    int age2;

public:
    void say () {
        cout << "My name is " << name << ", " << age << " years old" << endl;
    return ;
    }
};

int main() {
    People hug;
    hug.name = "Captain Hu";
    hug.age = 50;
    hug.say();
    return 0;

    return 0;
}
