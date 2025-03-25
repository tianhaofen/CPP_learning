/*************************************************************************
	> File Name: 10.reinterpret.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 25 Mar 2025 02:45:38 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int a, b, c, d;
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    unsigned int n;
    char *p = reinterpret_cast<char *>(&n);
    p[3] = a;
    p[2] = b;
    p[1] = c;
    p[0] = d;
    printf("n = %u\n", n);

    return 0;
}
