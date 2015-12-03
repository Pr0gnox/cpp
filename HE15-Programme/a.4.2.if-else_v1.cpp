#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

    int zahl;
    int erg;

    cout<<"Bitte geben Sie eine Zahl ein: "<< endl;
    cin>>zahl;

    erg = zahl % 2;

    if(erg == 0)
        {
            cout<<"Die Zahl "<<zahl<<" ist gerade!"<<endl;
        }
    else if(erg != 0 && erg > 0)
        {
            cout<<"Die Zahl "<<zahl<<" ist ungerade!"<<endl;
            cout<<"Die Zahl "<<zahl<<" ist groesser als 0!"<<endl;

        }
    else
        {
            cout<<"Die Zahl "<<zahl<<" ist kleiner als 0 oder eine falsche Zahl...!"<<endl;
        }


	return 0;
}
