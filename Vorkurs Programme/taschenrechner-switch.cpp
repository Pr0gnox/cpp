#include <iostream>
#include <cmath>

using namespace std ;

int main () {

    float zahl;
    float zahl1;
	float ergebnis;
	char opr = '?';
	
	
	//Eingabe
	cout << "Geben Sie eine Zahl ein: "<< endl;
    cin >> zahl;
    cout << "Geben Sie eine zweite Zahl ein: "<< endl;
    cin >> zahl1;
    cout << "Nun einen Operator: "<< endl;
    cin >> opr;
	
	
	//Eingabe wird überprüft
   switch(opr)
   {
	case '+':
		ergebnis = zahl + zahl1; break;
	case '-':
		ergebnis = zahl - zahl1; break;		
	case '*':
		ergebnis = zahl * zahl1; break;	
	case '/':
		ergebnis = zahl / zahl1; break;	
	
	//default wird ausgegeben wenn kein case zutrifft!
	default: cout << "du schoofseckel, gib rechti sache sii!"<< endl;
   
    }
   //Ausgabe falls ein case zutrifft
   cout << ergebnis<< endl;
   
   
	return 0;
}
