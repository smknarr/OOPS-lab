#include<iostream>
using namespace std;
class A {
public:
void whoamI(){ cout << "Class A" <<endl ; }
};
class B: virtual public A {
public:
void whoamI(){ cout << "Class B" << endl;}
};
class C: virtual public A {
public:
void whoamI(){ cout << "Class C" << endl;}
};
class D: public B, public C {
public:
void whoamI(){ cout << "Class D" << endl;}
};
main() {
D d;
d.whoamI();
}