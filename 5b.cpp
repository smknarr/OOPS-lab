#include <iostream>
using namespace std;
class Box
{ static int x;
float l,b,h;
public:
Box()
{ x++;
cout << "Enter length, breadth and height" << endl;
cin >> l >> b >> h;
}
void display()
{
cout << "Box dimensions are: " << endl;
cout << l << "\t" << b << "\t" << h << endl;
}
void getVolume()
{
float V;
V=l*b*h;
cout << "Volume is " << V << endl;
}
static void getCount()
{
cout << "Number of objects created are " << x << endl;
}
};
int Box:: x = 0;
int main()
{
Box a,b;
a.display();
a.getVolume();
b.display();
b.getVolume();
Box::getCount();
}