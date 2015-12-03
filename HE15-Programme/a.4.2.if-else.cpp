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

    if(erg == 0 && erg > 0)
        {
            cout<<"Die Zahl "<<zahl<<" ist gerade!"<<endl;

            if(erg>0)
            {
            cout<<"Die Zahl"<<zahl<<"ist grösser als 0!"<<endl;
            }

            else(erg<0);
            {
            cout<<"Die Zahl"<<zahl<<"ist kleiner als 0!"<<endl;
            }
        }
   // else if(zahl%2 !=0);
    else(erg!=0);
        {
            cout<<"Die Zahl "<<zahl<<" ist ungerade!"<<endl;
            if(erg>0)
            {
            cout<<"Die Zahl"<<zahl<<"ist grösser als 0!"<<endl;
            }

            else(erg<0);
            {
            cout<<"Die Zahl"<<zahl<<"ist kleiner als 0!"<<endl;
            }
        }




	return 0;
}
