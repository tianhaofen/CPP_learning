/*************************************************************************
	> File Name: 6.cout_any_type.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 20 Dec 2024 05:12:59 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

struct Point {
    int x, y;
};

ostream &operator<<(ostream &out, const Point &p) {
    out << "(" << p.x << "," << p.y << ")";
    return out;
}

int main() {
    Point p1 = {3, 4}, p2 = {5, 99};  
    printf("p1 = (%d, %d)\n", p1.x, p1.y);
    printf("p2 = (%d, %d)\n", p2.x, p2.y);
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;

    return 0;
}
