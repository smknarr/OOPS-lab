#include<iostream>
#include<fstream>
using namespace std;
main(){
fstream myfile;
myfile.open("C:/Users/Administrator/Desktop/sample.txt", ios::out | ios::trunc); // ios::trunc to
delete existing content
// ios:app to append to existing file
cout<<"Enter lines of text\nEnter -1 to stop" << endl;
string line;
while(1){
getline(cin,line);
if(line=="-1")
break;
myfile << line << endl;
}
cout << "Lines saved to file..." << endl;
myfile.close();
cout << "Reading lines from file..." << endl;
myfile.open("C:/Users/Administrator/Desktop/sample.txt", ios::in);
int count=0;
while(myfile){
getline(myfile, line);
count++;
}
myfile.close();
cout << "Count: " << count-1; //don't count /n at the end of file
}