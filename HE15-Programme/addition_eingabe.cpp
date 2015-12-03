#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double zahl1;
	double zahl2;
	int ergebnis;
	int ergebnis1;
	int ergebnis2;
	int ergebnis3;

	cout <<"Geben Sie bitte eine Zahl ein: "<<endl;
	cin >>zahl1;

	cout <<"Nun eine zweite Zahl: "<<endl;
	cin >>zahl2;

    ergebnis=zahl1+zahl2;
    ergebnis1=zahl1-zahl2;
    ergebnis2=zahl1*zahl2;
    ergebnis3=zahl1/zahl2;

    cout <<endl;
    cout <<endl;

	//cout <<"jetzt einen Operanten (+/-/*/:) :"<<endl;
    //cin >>oper;

    cout <<"zahl1 + zahl2 gibt: "<<ergebnis<<endl;
    cout <<"zahl1 - zahl2 gibt: "<<ergebnis1<<endl;
    cout <<"zahl1 * zahl2 gibt: "<<ergebnis2<<endl;
    cout <<"zahl1 / zahl2 gibt: "<<ergebnis3<<endl;

return 0;
}

//Aufgaben: 1.0-2.1 beim Aufgabenblatt
