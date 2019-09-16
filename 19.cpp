#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int a=0;
vector<int> aPos;
int e=0;
vector<int> ePos;
int i=0;
vector<int> iPos;
int o=0;
vector<int> oPos;
int u=0;
vector<int> uPos;
void vowelcount(char c, fstream& file){
if(c>= 'a' && c<'z'){
if(c=='a'){
a++;
aPos.push_back(file.tellp()-1);
}
else if(c=='e'){
e++;
ePos.push_back(file.tellp()-1);
}
else if(c=='i'){
i++;
iPos.push_back(file.tellp()-1);
}
else if(c=='o'){
o++;
oPos.push_back(file.tellp()-1);
}
else if(c=='u'){
u++;
uPos.push_back(file.tellp()-1);
}
}
}
void to_lower(char& c){
if(c>= 'A' && c<='Z')
c=c+32;
}
void writeData(char vowel, vector<int> pos, int vowelcount, fstream& file){
file << "\n";
file << "\nCount "<< vowel <<": " << vowelcount <<endl;
file << "Positions of "<< vowel <<": " << endl;
for(vector<int>::iterator it=pos.begin(); it!=pos.end(); ++it){
file << *it << " ";
}
}
main(){
fstream myfile;
myfile.open("C:/Users/Administrator/Desktop/vowels.txt", ios::out | ios::trunc); // ios::trunc to
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
myfile.open("C:/Users/Administrator/Desktop/vowels.txt", ios::in);
char c;
while(myfile){
myfile.get(c);
to_lower(c);
vowelcount(c,myfile);
}
fstream file2;
file2.open("C:/Users/Administrator/Desktop/vowelData.txt", ios::out | ios::trunc);
writeData('a', aPos, a, file2);
writeData('e', ePos, e, file2);
writeData('i', iPos, i, file2);
writeData('o', oPos, o, file2);
writeData('u', uPos, u, file2);
file2.close();
cout<< "Data entered into file...\n";
file2.open("C:/Users/Administrator/Desktop/vowelData.txt", ios::in);
while(!file2.eof()){
getline(file2,line);
cout << line << endl;
}
}