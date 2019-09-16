#include<iostream>
using namespace std;
main(){
//multiple catch
try {
throw 20;
}
catch(int e){
cout << "catches an integer: " << e << endl;
}
catch(float e){
cout << "catches a float: " << e << endl;
}
catch(char const* e){
cout << "catches a string: " << e << endl;
}
catch(...){
cout << "catches anything: " << endl;
}
//rethrowing exception
try {
try {
throw "yeet";
}
catch(char const* e){
throw "hello from the inner try/catch";
}
}
catch(char const* e){
cout << "Caught an error: " << e << endl;
}
}