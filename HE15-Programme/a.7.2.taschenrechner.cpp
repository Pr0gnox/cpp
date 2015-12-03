#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

    float zahl1;
    float zahl2;
    char operant;
    float ergebnis;


    cout<<"Erste Zahl eingeben: "<< endl;
    cin>>zahl1;

    cout<<"Zweite Zahl eingeben: "<< endl;
    cin>>zahl2;

    cout<<"Operant eingeben: "<< endl;
    cin>>operant;



    if(operant=='+'){
        cout<<"Ihr Resultat ist: "<<zahl1+zahl2<<endl;}

    else if(operant=='-'){
        cout<<"Ihr Resultat ist: "<<zahl1-zahl2<<endl;}

    else if(operant=='*'){
        cout<<"Ihr Resultat ist: "<<zahl1*zahl2<<endl;}

    else if(operant=='/'){
        cout<<"Ihr Resultat ist: "<<zahl1/zahl2<<endl;}

    else{cout<<"Ungueltige Eingabe!"<<endl;}














	return 0;
}
