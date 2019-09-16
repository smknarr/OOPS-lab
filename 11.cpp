#include <iostream>
#include <fstream>
using namespace std;
class studRec {
private:
int rollno;
int m1, m2, m3;
char grade;
string name;
public:
void display(){
cout << "NAME: " << name << endl;
cout << "ROLL NO: " << rollno << endl;
cout << "MARKS: " << m1 << " " << m2 << " " << m3 << " " << endl;
cout << "GRADE: " << grade << endl;
}
void read(int r, string s, int mark1, int mark2, int mark3){
rollno = r;
name=s;
m1 = mark1;
m2 = mark2;
m3=mark3;
}
void getGrade(){
int average = (m1+m2+m3)/3;
if(average >= 90)
grade='A';
else if (average >= 80 && average < 90)
grade='B';
else if (average >= 70 && average < 80)
grade='C';
else if (average >= 60 && average < 70)
grade='D';
else
grade='E';
}
};
main(){
fstream myfile;
int n, roll, m1,m2,m3;
string name;
studRec student;
cout << "Enter no of students: ";
cin >> n;
myfile.open("C:/Users/Admin/Desktop/stud.dat",ios::out|ios::binary);
for(int i=0; i<n; i++){
cout << "Enter name: ";
cin >> name;
cout << "Enter roll: ";
cin>> roll;
cout << "Enter 3 marks: ";
cin >> m1 >> m2 >> m3;
student.read(roll,name, m1, m2, m3);
student.getGrade();
myfile.write((char*)&student,sizeof(student));
}
myfile.close();
myfile.open("C:/Users/Admin/Desktop/stud.dat",ios::in|ios::binary);
if(!myfile){
cout<<"Error in opening file...\n";
return -1;
}
while(myfile){
if(myfile.read((char*)&student,sizeof(student))){
cout<<endl<<endl;
cout<<"Data extracted from file..\n";
//print the object
student.display();
}
}
}