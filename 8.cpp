#include<iostream>
#include<fstream>
using namespace std;
main(){
fstream myfile;
myfile.open("C:/Users/Administrator/Desktop/sample.txt", ios::out | ios::trunc);
cout << "Enter lines \nEnter -1 to stop\n";
string line;
while(myfile){
getline(cin,line);
if(line == "-1")
break;
myfile << line;
}
int fileSize = myfile.tellp();
cout <<"Size: "<< fileSize;
myfile.close();
}