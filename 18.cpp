#include<iostream>
#include<map>
using namespace std;
main(){
map<string, int> mymap;
int choice, value;
string key;
while(1){
cout << "\n1.Insert into map\n2.Delete element from map\n3.Find element at key\n4.Size of
map\n5.Display\n6.Value at 'HOD, Dept. of CSE'\n7.Exit\t";
cin >> choice;
switch(choice){
case 1:
cout << "Enter key:";
cin.ignore();
getline(cin,key);
cout << "Enter value: ";
cin >> value;
mymap.insert(pair<string, int>(key,value));
break;
case 2:
cout << "Enter key of element to delete: ";
cin >> key;
if(mymap.find(key)!=mymap.end()){
value = mymap.erase(key);
cout << "Deleted" <<endl;
}
else
cout << "Key not found" << endl;
break;
case 3:
cout << "Enter key: ";
cin >> key;
if(mymap.find(key)!=mymap.end())
cout << "Value: " << mymap.at(key) << endl;
else
cout << "Key not found" << endl;
break;
case 4:
cout << "Size: " << mymap.size() << endl;
break;
case 5:
{
map<string, int>::iterator itr;
for (itr = mymap.begin(); itr != mymap.end(); ++itr) {
cout << '\t' << itr->first
<< '\t' << itr->second << '\n';
}
}
break;
case 6:
if(mymap.find("HOD, Dept. of CSE")!=mymap.end())
cout << "Value: " << mymap.at("HOD, Dept. of CSE") << endl;
else
cout << "'HOD, Dept. of CSE' Key not found." << endl;
break;
case 7:
exit(0);
default: cout << "Invalid choice";
}
}
}