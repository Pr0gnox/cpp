#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {
	
	//Alle angaben die wir vorab definieren müssen
	int durchgang = 100;
	int levels = 5; // Level bzw. ebenen, die die Kugel durchlaufen muss
	int slots = 6; //Kästchen bzw. Slots wo die Kugel reinfallen
	int array[6] = {}; //array das nicht definierten Inhalt hat
	srand((unsigned)time(0));
	int zufall = 0; //wird auf 0 gesetzt und in der Schlaufe hoch gerechnet
	int counterebene = 0; //ebene deklariert
	
	   
    //Alle Kästchen wider auf 0
	for (int i = 0; i < slots; i++)
	{
		array[i]  = 0;
	}
   
	//Schleife für Kugeln
	for (int n = 0; n  < durchgang; n++) //Schlaufe für 100 Kugeln fallen lassen
	{
		counterebene = 0; // setzt den counterebene nach durchlauf der Schleife wider auf 0. Sonst würde er endlos Kästchen füllen und dann ein Fehler bringen
		for (int ebene = 0; ebene < levels; ebene++) // Schlaufe in der Schlaufe, die, die ebene (Levles) durchläuft
		{
		zufall = (rand()%2);	//Zufalls generator Links oder Rechts für die Kugel
		counterebene = counterebene + zufall; // zählt wie oft die Kugel nach links oder rechts fällt
		//cout << zufall << "  "<<counterebene << endl; --> das ist die Ausgabe um zu überprüfen ob das Programm richtig rechnet und die Kugel in das richtige Kästchen fällt
		}
		array[counterebene]++; // Zählt die Kugeln in den Kästchen bzw. Slots
	
	}
	//Automatische  Ausgabe wieviel Kugeln in welchem Slot (6 slots) landen
	for (int i = 0; i < slots; i++)
	{
		cout << "Slot " << (i+1) << ":" << array[i] <<endl;
	}
	
	return 0;
}
