#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std ;

int main () {

	int size = 5;
	
	//Leeres Array
	int array[size];
	
	//Array mit Initialisierung
	int array1[5]  = {1,5,255,6,8};

	//Ausgabe Array Feld mit Index 0
	//--> Erstes Array Element
	
	cout << array[0] << endl;
	cout << array1[4] << endl;
	
	array[0] = 12345;
	cout << array[0] << endl;
	
	
	
	//Galtonsches Brett Array - mit 6 Feldern
	//Beim definieren wird im [] die Menge der Element angegeben!!
	//Zuweisung von = {} füllt alles Felder mit 0
	int gboard[6] = {1,2,3,4,5,6};
	
	//Ausgabe aller Felder vom gboard
	for (int i = 0; i < 6; i++)
	{
		cout << gboard[i] << endl;
	}
   
   //Alle Felder wider auf 0
	for (int i = 0; i < 6; i++)
	{
		gboard[i]  = 0;
		cout << gboard[i] << endl;
	}
	
	
	
	
	
	return 0;
}
