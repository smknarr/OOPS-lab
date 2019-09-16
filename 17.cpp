#include<iostream>
#include<fstream>
using namespace std;
void insertIntoFile(fstream& file){
cout << "Enter -1 to stop\n";
string line;
while(file){
getline(cin,line);
if(line == "-1")
break;
file << line << endl;
}
}
main(){
fstream myfile1;
myfile1.open("C:/Users/Administrator/Desktop/sample1.txt", ios::out);
cout<<"Enter lines for FILE 1: " << endl;
insertIntoFile(myfile1);
myfile1.close();
fstream myfile2;
myfile2.open("C:/Users/Administrator/Desktop/sample2.txt", ios::out);
cout<<"Enter lines for FILE 2: " << endl;
insertIntoFile(myfile2);
myfile2.close();
cout <<"Appending FILE 2 to FILE 1...." << endl;
myfile1.open("C:/Users/Administrator/Desktop/sample1.txt", ios::out | ios::in | ios::app);
myfile2.open("C:/Users/Administrator/Desktop/sample2.txt", ios::in);
string line;
while(myfile2){
getline(myfile2,line);
myfile1 << line << endl;
}
cout << "Contents of FILE 1" << endl;
myfile1.seekg(0, std::ios::beg);
while(myfile1){
getline(myfile1,line);
cout << line << endl;
}
myfile1.close();
myfile2.close();
}