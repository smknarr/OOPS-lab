#include<iostream>
#include<list>
using namespace std;
main(){
list<int> mylist;
int i;
cout << "Enter list elements\nEnter -1 to stop" << endl;
while(1){
cin >> i;
if(i==-1)
break;
mylist.push_back(i);
}
int choice;
int elem1,elem2;
while(1){
cout << "\n1.Insert element at front and end\n2.Delete element at front and
end\n3.Display\n4.Size of List\n5.Remove specific values\n6.Remove
duplicates\n7.Reverse\n8.Merge\n9.Sort\n10.Exit\n";
cin >> choice;
switch(choice){
case 1:
cout << "Enter element to add at front: ";
cin >> elem1;
cout << "Enter element to add at end: ";
cin >> elem2;
mylist.push_front(elem1);
mylist.push_back(elem2);
cout << "Pushed\n" << endl;
break;
case 2:
mylist.pop_back();
mylist.pop_front();
cout << "Deleted\n" <<endl;
break;
case 3:
{
list<int> :: iterator iter;
for(iter=mylist.begin(); iter!=mylist.end(); ++iter)
cout << *iter << " ";
}
cout << "\n";
break;
case 4:
cout << "Size: " << mylist.size()<<endl;
break;
case 5:
cout << "Enter value to remove: ";
cin >> elem1;
mylist.remove(elem1);
break;
case 6:
mylist.unique();
break;
case 7:
mylist.reverse();
cout << "Reversed \n";
break;
case 8:
{
list<int> mylist2;
cout << "Enter list elements\nEnter -1 to stop" << endl;
while(1){
cin >> i;
if(i==-1)
break;
mylist2.push_back(i);
}
mylist.merge(mylist2);
}
break;
case 9:
mylist.sort();
cout << "Sorted\n";
break;
case 10:
exit(0);
}
}
}