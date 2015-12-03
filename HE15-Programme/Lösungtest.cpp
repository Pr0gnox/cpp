#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

    int line;

    cout<<"Bitte geben Sie die Anzahl Linien ein: "<<endl;
    cin>>line;

    for(int i = line; i>0; i--)
        {
        for(int x= 0; x <= i ; x++){
        cout<<"+";}

        if(i%2==0){
        cout<<"KTSI";}

        cout<<endl;

        }


	return 0;
}
