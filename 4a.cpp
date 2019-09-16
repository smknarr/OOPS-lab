#include <iostream>
using namespace std;
template <class T>
class Bubble
{
int n;
T *a;
public:
Bubble (int p)
{
n=p;
a=new T[n];
}
~Bubble () { delete [] a; }
void read()
{ int i;
cout << "Enter the elements of array" << endl;
for (i=0;i<n;i++)
cin >> a[i];
}
void sort ()
{
int i,j;
T temp;
for (i=0;i<n-1;i++)
{
for (j=0;j<n-i-1;j++)
{
if (a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
void display ()
{
int i;
for (i=0;i<n;i++)
cout << a[i] << " ";
cout << endl;
}
};
int main()
{
int choice,num;
cout << "Enter 1 for integer" << endl << "Enter 2 for floating point values" << endl << "Enter 3
for characters" << endl;
cin >> choice;
cout << "Enter number of elements" << endl;
cin >> num;
switch (choice)
{
case 1: { Bubble <int> a(num); a.read(); cout << "Sorted array is" << endl; a.sort(); a.display();
}
break;
case 2: { Bubble <float> a(num); a.read();cout << "Sorted array is" << endl; a.sort();
a.display(); }
break;
case 3: { Bubble <char> a(num); a.read();cout << "Sorted array is" << endl; a.sort();
a.display(); }
break;
}
return 0;
}