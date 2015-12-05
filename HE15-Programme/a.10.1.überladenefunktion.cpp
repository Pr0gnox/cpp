#include <iostream>
using namespace std ;


void functionOverload(char x){
    cout<<"char"<<endl;
}
void functionOverload(int x){
    cout<<"int"<<endl;
}
void functionOverload(double x){
    cout<<"double"<<endl;
}
int main () {


    functionOverload(2);
    functionOverload('b');
    functionOverload(2.5);


	return 0;
}
