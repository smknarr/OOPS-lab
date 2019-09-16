#include<iostream>
#include<vector>
using namespace std;
main(){
vector<int> myvector;
int elem;
cout << "Enter elements into vector\nEnter -1 to stop" << endl;
while(1){
cin >> elem;
if(elem==-1)
break;
myvector.push_back(elem);
}
int choice;
while(1){
cout << "\n1.Insert element\n2.Delete last element\n3.Display vector\n4.Size of
vector\n5.Clear vector\n6.Exit\t";
cin >> choice;
switch(choice){
case 1:
cout << "Enter element: ";
cin >> elem;
myvector.push_back(elem);
break;
case 2:
if(!myvector.empty()){
myvector.pop_back();
cout << "Deleted\n";
} else
cout << "Vector empty\n";
break;
case 3:
if(!myvector.empty())
{
vector<int> :: iterator iter;
for(iter=myvector.begin(); iter!=myvector.end();++iter)
cout << *iter << " ";
}
else
cout << "Vector Empty\n";
break;
case 4:
cout << "Size: " << myvector.size() << endl;
break;
case 5:
myvector.clear();
cout << "Cleared\n";
break;
case 6:
exit(0);
}
}
}