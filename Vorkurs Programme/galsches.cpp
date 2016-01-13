#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

	const int durchgang = 100;
	const int levels = 5;
	const int slots = 6;
	int zufall = 0;
	int counter = 0;
	int array[6] = {};
	srand((unsigned)time(0));



	//Alle kästchen auf 0
	for (int i = 0 ; i < slots ; i++)
	{
		array[i] = 0;
	}


	//Schleife für Kugeln
	for (int n = 0; n < durchgang; n++)
	{
		counter = 0;
		for (int ebene = 0; ebene < levels; ebene++)
		{
			zufall = (rand() %2);
			counter = counter + zufall;
		}
		array[counter]++;
	}

	//Ausgabe
	for (int i=0; i < slots; i++)
	{
		cout << "Slots"<< (i+1) <<": "<< array[i]<<endl;
	}


	return 0;
}
