#include<iostream>
using namespace std;
class student {
public:
int roll;
string name;
public:
virtual void read()=0;
void display(){
cout << "Roll: " << roll << endl;
cout << "Name: " << name << endl;
}
};
class engineer: public student {
public:
void read(){
cout << "\nEngineer" << endl;
cout << "Enter roll: ";
cin >> roll;
cout << "Enter name: " ;
cin >> name;
}
};
class medical: public student {
string dept;
public:
void read(){
cout << "\nMedical" << endl;
cout << "Enter roll: ";
cin >> roll;
cout << "Enter name: ";
cin >> name;
cout << "Enter department: ";
cin >> dept;
}
void display1(){
display();
cout << "Department: " << dept << endl;
}
};
class science: public student {
string field;
public:
void read(){
cout << "\nScientist" << endl;
cout << "Enter roll: ";
cin >> roll;
cout << "Enter name: ";
cin >> name;
cout << "Enter field: ";
cin >> field;
}
void display1(){
display();
cout << "Field: " << field << endl;
}
};
main(){
engineer E;
science S;
medical M;
M.read();
E.read();
S.read();
cout << "MEDICAL: " << endl;
M.display1();
cout << "ENGINEER: " << endl;
E.display();
cout << "SCIENTIST: " << endl;
S.display1();
}