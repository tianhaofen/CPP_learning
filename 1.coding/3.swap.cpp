/*************************************************************************
	> File Name: 3.swap.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 18 Dec 2024 06:46:08 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

void swap(int &pa, int &pb) {
    int c = pa;
    pa = pb;
    pb = c;
}

void inc(int &x) {
    x += 1;
    return ;
}

int main() {
    int a= 3, b = 6;
    printf("a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("a = %d, b = %d\n", a, b);
    inc(a);
    inc(b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
