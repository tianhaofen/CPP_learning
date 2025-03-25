/*************************************************************************
	> File Name: 12.visitor_problem.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 25 Mar 2025 03:43:33 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A;
class B;
class C;

class Base {
public :
    class IVisitor {
    public :
        virtual void visit(A *) = 0;        
        virtual void visit(B *) = 0;        
        virtual void visit(C *) = 0;        
    };
    virtual void Accept(IVisitor *) = 0;
    virtual ~Base() {}
};

class A : public Base {
public :
    void Accept(IVisitor *vis) override {
        vis->visit(this);
        return ;
    }
};
class B : public Base {    
public :
    void Accept(IVisitor *vis) override {
        vis->visit(this);
        return ;
    }
};
class C : public Base {
public :
    void Accept(IVisitor *vis) override {
        vis->visit(this);
        return ;
    }
};

class DynamicVisitor : public Base::IVisitor {
public :
    void visit(A *obj) override {
        cout << "Class A : dynamic_cast" << endl;
        return ;
    }        
    void visit(B *) override {
        cout << "Class B : dynamic_cast" << endl;
        return ;
    }        
    void visit(C *) override {
        cout << "Class C : dynamic_cast" << endl;
        return ;
    }       

};

int main() {
    srand(time(0));
    Base *p;
    switch (rand() % 3) {
        case 0: p = new A(); break;
        case 1: p = new B(); break;
        case 2: p = new C(); break;
    }


    if (dynamic_cast<A *>(p) != nullptr) {
        cout << "Class A : dynamic_cast" << endl;
    }
    else if (dynamic_cast<B *>(p) != nullptr) {
        cout << "Class B : dynamic_cast" << endl;
    }
    else if(dynamic_cast<C *>(p) != nullptr) {
        cout << "Class C : dynamic_cast" << endl;
    }


    return 0;
}
