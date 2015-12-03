#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

	int einsatz;
	int betrag;
	int counter = 0;
	int zahlen = rand() % 36+1; //Zahlen 0-36
	srand((unsigned)time(0));
	
		
	cout <<"Bitte geben Sie ihren Betrag an: "<< endl;
	cin >>betrag;
	
	cout <<"Nun ihren Einsatz pro Runde: " << endl;
	cin>>einsatz;
	
	
	for (int i =0; i<betrag; i++)
	{
		
		
		for (int i=0; i<einsatz; i++)
		{
			if (einsatz == zahlen)
			{
				betrag = einsatz + einsatz;
			}
		
			else (einsatz != zahlen);
			{
				betrag = betrag - einsatz;
			}
		
			cout << "Ihr Stand ist: " << betrag << endl;
		}
		
		
		if (betrag == 0; break)
		{
			cout << "Sie haben kein Geld mehr" << endl;
		}
		else (betrag == betrag*2; break)
		{
			cout << "Sie haben Ihr Geld verdoppelt" << endl;
		}
		
		
		
	}
   
	
	
	
	return 0;
}
