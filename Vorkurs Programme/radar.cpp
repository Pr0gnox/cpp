#include <iostream>
#include <cmath>

using namespace std;


int main () {

	//Variablen
	float strecke; //Meter
	float zeit; //Sekunden
	float ergebnis;
	float ergebnis1; // Km pro Std.

	//Eingabe
	cout << "Bitte geben seine Distanz in Meter ein: " << endl;
	cin >> strecke;
	cout << "nun bitte die Zeit in Sekunden: " << endl;
	cin >> zeit;
	cout << endl;

	//Berechnung
	ergebnis = strecke / zeit;
	ergebnis1 = ergebnis * 3.6;

	//Ausgabe
	cout << "Die Geschwindigkeit betraegt: " << ergebnis << " Meter pro Sekunde" <<endl;
	cout << "In km/h: " << ergebnis1 << endl;


return 0;
}
