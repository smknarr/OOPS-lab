#include <iostream>
#include<cmath>
using namespace std;
int armstrong (int,int);
int main()
{
int n,l=0,i,temp;
cout<<"Enter number" << endl;
cin >> n;
temp=n;
while (temp)
{
l++;
temp=temp/10;
}
temp=n;
while (temp)
{
i+=pow(temp%10,l);
temp=temp/10;
}
if (i==n)
cout << "It is an Armstrong number " << endl;
else
cout << "It is not an Armstrong number " << endl;
return 0;
}