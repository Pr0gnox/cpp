#include <iostream>
#include <cmath>
using namespace std ;

int main () {

	//Gegebene Werte
	const float g = 9.807; // Erdbeschleunigung

	float h;
	float ergebnis; //Sekunden
	float ergebnis1; //Minuten
	float ergebnis2; //Stunden

	//Input der Höhe in KM
    cout << "Bitte geben Sie eine hoehe des Objektes ein" << endl;
    cin >> h;

	//Berechnung
	ergebnis = sqrt ( 2 * h / g);

		//Umrechnung
		ergebnis1 = ergebnis / 60;
		ergebnis2 = ergebnis1 / 60;

	//Ausgbe
	cout << "Die Zeit bis zum Aufprall betraegt: " <<endl;
	cout<<ergebnis << " Sekunden oder:" << endl;
	cout << ergebnis1 << " Minuten oder:" << endl;
	cout << ergebnis2 << " Stunden" << endl;


	return 0;
}
