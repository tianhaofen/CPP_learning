/*************************************************************************
	> File Name: 4.cout.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 18 Dec 2024 07:05:15 PM CST
 ************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int a = 123;
    cout << "hello world" << endl;
    cout << a << endl;
    cout << "a = " << a << endl;
    
    double b = 12.345;
    cout << b << endl;
    printf("%%lf = %lf\n", b);
    printf("%%g = %g\n", b);
    cout << fixed << setprecision(1) << b << endl;

    return 0;
}
