/*************************************************************************
	> File Name: 2.namespace.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 17 Dec 2024 07:11:17 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

namespace apple {

int cnt = 0;
void inc() {
    cnt += 1;
    return ;
}
}

namespace banana {

int cnt = 0;
void inc() {
    cnt += 1;
    return ;
}
}

namespace apple {
    void dec() {
        cnt -= 1;
        return ;
    }
}

namespace {
    int a = 1;
}

#define P(msg) {\
    printf("%s = %d\n", #msg, msg);\
}

int main() {
    P(a);
    cout << "hello world" << endl;
    apple::cnt += 2;
    P(apple::cnt);
    apple::dec();
    P(apple::cnt);
    using banana::cnt;
    cnt += 100;
    P(apple::cnt);
    P(banana::cnt);
    
    using namespace banana;
    inc();
    P(apple::cnt);
    P(banana::cnt);

    return 0;
}
