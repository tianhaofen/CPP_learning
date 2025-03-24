/*************************************************************************
	> File Name: 2.obj_size.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Sat 15 Mar 2025 02:26:02 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#define P(class_name) {\
    printf("class %s : %lu\n", #class_name, sizeof(class_name));\
}

class Base {
public :
    Base() : x(0x1111111111111111LL) {}
    long long x;
};

class A : public Base{
public:
    A() : y(0x22222222) {}
    int y;
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
    P(Base);
    P(A);
    A a;
    output_adress(&a, sizeof(a));

    return 0;
}
