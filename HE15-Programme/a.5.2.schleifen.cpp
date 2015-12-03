#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

    float basis;
    int exponent;
    float ergebnis;
    char abfrage;



    cout<<"Möchten Sie Spielen? j=Ja und n=Nein: "<<endl;
    cin>>abfrage;

    if(abfrage == j){
        cout<<"Bitte Basiswert eingeben: "<<endl;
        cin>>basis;

        cout<<"Bitte Exponent eingeben: "<<endl;
        cin>>exponent;

        cout<<endl;
        cout<<endl;

        ergebnis = pow(basis,exponent);
        cout<<ergebnis<<endl;
    }
    else if(abfrage == n){
        cout<<"Danke fürs Spielen!"<<endl;}

    else(abfrage != n && abfrage != j);{
        cout<<"Falsche Eingabe!!!"<<endl;}

	return 0;
}
