/*************************************************************************
	> File Name: 4.subclass_storage.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 17 Mar 2025 02:27:14 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base1 {
public:
    Base1() : b1(0x11111111) {}
    int b1;
};

class Base2 {
public:
    Base2() : b2(0x22222222) {}
    int b2;
};

class A : public Base2, public Base1 {
public:
    A() : a(0x33333333) {}
    int a;
};

class B : public Base1, public A {
public:
    B() : x(0x44444444) {}
    int x;
};

void output_adress(void *_p, size_t n) {
    unsigned char *p = (unsigned char *)(_p);
    printf("%p : ", p);
    for (int i = 0; i < n; i++) {
        if (i % 8 == 0) printf("\n");
        printf("%02X ", p[i]);

    }
    printf("\n");

    return ;
}


int main() {
    A a;
    output_adress(&a, sizeof(a));
    B b;
    output_adress(&b, sizeof(b));

    return 0;
}
