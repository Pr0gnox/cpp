#include <iostream>

using namespace std ;

int main () {

    int i (5);
    cout<< "i= "<<i<<endl;
    double d(1.1);
    double x;
    cout<<x<<endl;
    cout<<"Hallo: "<<i<<endl;
    const int c=5;
    i=12;
    //c = 23; wird dies geändert, wird ein fehler ausgegeben, weil eien Constante NIE verändert werden können!!!
    cout<<" i= "<<i<<endl;
    cout<<" d= "<<d<<endl;
    cout<<" c= "<<c<<endl;

    cout<<"n\Die Variablen werden verändert"<<endl;

    i=5;
    d=5.0;
    //c =6; wird dies geändert, wird ein fehler ausgegeben, weil eien Constante NIE verändert werden können!!!

    cout<<" i= "<<i<<endl;
    cout<<" d= "<<d<<endl;
    cout<<" c= "<<c<<endl;


	return 0;
}
