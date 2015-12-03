#include <iostream>
#include <cmath>
using namespace std ;

int main () {

	int stueck;
	float preis;
	float total;

	//Eingeabe
	cout <<"Bitte geben Sie die Stueckzahl ein: " << endl;
	cin >> stueck;
	cout <<"vielen Dank, und nun bitte der Stueckpreis: " << endl;
    cin >> preis;

    //Preis:
    total = stueck * preis;

    //Berechnung 5% Rabatt
    if
    (stueck >= 10 && stueck <= 100) {
    total -= total * 0.05;  // total / 100 * 95 ;
    }

    //Berechnung 8% Rabatt
    else if
    (stueck >= 100) {
    total -= total * 0.08;  //total / 100 * 92;
    }

    cout << "Der Gesamtpreis ist: "<<total<< " Franken Ihres Einkaufes" << endl;


	return 0;
}
