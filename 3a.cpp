#include <iostream>
using namespace std;
class A
{
int x;
public:
A();
void print();
void operator ++();
void operator ++(int);
};
A :: A()
{
cout << "Enter the data " << endl;
cin >> x;
}
void A :: print ()
{
cout << "The initial data is " << x << endl;
}
void A :: operator ++()
{
cout << "The pre incremented data is " << ++x << endl;
}
void A :: operator ++(int)
{
cout << "The post incremented data is " << x++ << endl;
}
int main()
{
A a;
a.print();
a++;
++a;
return 0;
}