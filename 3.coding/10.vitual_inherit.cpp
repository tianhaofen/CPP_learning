/*************************************************************************
	> File Name: 10.vitual_inherit.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 21 Mar 2025 03:07:18 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

bool is_little() {
    static int n = 1;
    return ((unsigned char *)&n)[0] == 1;
}

void reverse_ptr(uintptr_t &ptr) {
    unsigned char *p1 = (unsigned char *)(&ptr);
    unsigned char *p2 = p1 + sizeof(uintptr_t) - 1;
    while(p1 < p2) {
        swap(p1[0], p2[0]);
        p1++, p2--;
    }
    return;
}

void print_address(uintptr_t ptr, int n) {
    unsigned char *p = (unsigned char *)(ptr);
    printf ("adress %p : \n", p);
    for (int i = 0, j = 1;i < n; i++, j++) {
        printf("%02X", p[i]);
        //if (j % 4 == 0) printf(" ");
        if (j % 8 == 0 && i != n-1) printf("\n");
    }
    printf("\n");
    return ;
} 

class A {
public :
    A() {
        this->x = 0xaaaaaaaa;
    }
    int x;
};

class B : virtual  public A {
public:
    B() {
        //this->x = 0xbbbbbbbb;
    }
    void set_x(int x) {
        this->x = x;
        return ;
    }
};

class C : virtual public A {
public:
    C() {
        //this->x = 0xcccccccc;
    }
    int get_x() {
        return this->x;
    }
};

class D : public B, public C {};

int main() {
    if (is_little()) cout << "is_little" << endl;
    D d;
    print_address((uintptr_t)&d, sizeof(D));
    uintptr_t ptr;
    int n;
    while (~scanf("%lx%d", &ptr, &n)) {
        if (is_little()) reverse_ptr(ptr);
        print_address(ptr, n);
    }

    return 0;
}
