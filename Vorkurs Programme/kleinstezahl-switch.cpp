#include <iostream>

using namespace std ;

int main () {

    float zahl;
    float zahl1;
    float zahl2;
    float zahl3;
    float zahl4;
    float zahl5;
    float zahl6;
    float zahl7;
    float zahl8;
    float zahl9;
	float ergebnis;
	
	


	//Eingabe
	cout << "Geben Sie eine Zahl1 ein: "<< endl;
    cin >> zahl;
    cout << "Geben Sie noch eine Zahl2 ein: "<< endl;
    cin >> zahl1;
    cout << "Geben Sie noch eine Zahl3 ein: "<< endl;
    cin >> zahl2;
    cout << "Geben Sie noch eine Zahl4 ein: "<< endl;
    cin >> zahl3;
    cout << "Geben Sie noch eine Zahl5 ein: "<< endl;
    cin >> zahl4;
    cout << "Geben Sie noch eine Zahl6 ein: "<< endl;
    cin >> zahl5;
    cout << "Geben Sie noch eine Zahl7 ein: "<< endl;
    cin >> zahl6;
    cout << "Geben Sie noch eine Zahl8 ein: "<< endl;
    cin >> zahl7;
    cout << "Geben Sie noch eine Zahl9 ein: "<< endl;
    cin >> zahl8;
    cout << "Geben Sie noch eine Zahl10 ein: "<< endl;
    cin >> zahl9;



	//Eingabe wird überprüft
	switch (z)
	{
		case 'z':
		ergebnis = (zahl <= zahl1 && zahl <= zahl2 && zahl <= zahl3 && zahl <= zahl4 && zahl <= zahl5 && zahl <= zahl6 && zahl <= zahl7 && zahl <= zahl8 && zahl <= zahl9); break;
		
		case 'z':
		ergebnis = (zahl1 <= zahl2 && zahl1 <= zahl3 && zahl1 <= zahl4 && zahl1 <= zahl5 && zahl1 <= zahl6 && zahl1 <= zahl7 && zahl1 <= zahl8 && zahl1 <= zahl9); break;
		
		case 'z':
		ergebnis = (zahl2 <= zahl3 && zahl2 <= zahl4 && zahl2 <= zahl5 && zahl2 <= zahl6 && zahl2 <= zahl7 && zahl2 <= zahl8 && zahl2 <= zahl9); break;
		
		case 'z':
		ergebnis = (zahl3 <= zahl4 && zahl3 <= zahl5 && zahl3 <= zahl6 && zahl3 <= zahl7 && zahl3 <= zahl8 && zahl3 <= zahl9); break;
		
		case 'z':
		ergebnis = (zahl4 <= zahl5 && zahl4 <= zahl6 && zahl4 <= zahl7 && zahl4 <= zahl8 && zahl4 <= zahl9); break;

		case 'z':
		ergebnis = (zahl5 <= zahl6 && zahl5 <= zahl7 && zahl5 <= zahl8 && zahl5 <= zahl9); break;
		
		case 'z':
		ergebnis = (zahl6 <= zahl7 && zahl6 <= zahl8 && zahl6 <= zahl9); break;
		
		case 'z':
		ergebnis = (zahl7 <= zahl8 && zahl7 <= zahl9); break;
		
		case 'z':
		ergebnis = (zahl8 <= zahl9); break;
		
		case 'z':
		ergebnis == zahl9; break;


	default: cout <<"Gib was rechtes ein, Du Dummer Hund"<< endl;
			
	}
	
	
	cout << "Die kleinste Zahl die Sie eingegeben haben ist: " << ergebnis << " !"<< endl;
		
	
	
	return 0;
	
}