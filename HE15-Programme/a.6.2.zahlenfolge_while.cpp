#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

    float zahl;
    float schritt;
    float ziel;

    cout<<"Bitte start Zahl eingeben: "<<endl;
    cin>>zahl;

    cout<<"Bitte schritt Zahl eingeben: "<<endl;
    cin>>schritt;

    cout<<"Bitte End Zahl eingeben: "<<endl;
    cin>>ziel;

    cout<<endl;
    cout<<endl;
    cout<<endl;


    while(zahl <= ziel){
        cout<<zahl<<endl;
        zahl = zahl+schritt;
        }


	return 0;
}
