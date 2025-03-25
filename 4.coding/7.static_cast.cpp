/*************************************************************************
	> File Name: 7.static_cast.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 25 Mar 2025 10:34:26 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

namespace T1 {

    void run() {
        int x = 123;
        double fx = static_cast<double>(x);
        const int cx = 456;
        int non_cx = static_cast<int>(cx);


        return ;
    }
}

namespace T2 {

    void run() {
       // int *x = new int();
       // double fx = static_cast<double *>(x);
        //const int *cx = new int();
        //int *non_cx = static_cast<int *>(cx);
        int * const p1 = new int();
        int *p2 = static_cast<int *>(p1);

        return ;
    }
}

namespace T3 {
    class Base {};
    class A : public Base {
    public:    
        operator int() {
            return 123;
        }
    };
    class B {};
    class C : public Base {};
    void run() {
        A *p1 = new A();
       // B *p2 = static_cast<B *>(p1);
        Base *p3 = static_cast<Base *>(p1);
        //C *p4 = static_cast<C *>(p1);
        cout << (int)(*p1) << endl;
        cout << static_cast<int>(*p1) << endl;
        
        return ;
    }
}



int main() {
    T1::run();
    T2::run();
    T3::run();

    return 0;
}
