#include <iostream>
#include <cmath>

using namespace std ;

int main () {

    float zahl;
    float zahl1;
    char opr;

    //Eingabe
    cout << "Geben Sie eine Zahl ein: "<< endl;
    cin >> zahl;
    cout << "Geben Sie eine zweite Zahl ein: "<< endl;
    cin >> zahl1;
    cout << "Nun einen Operator: "<< endl;
    cin >> opr;

    //Berechnung
    if (opr == '+')
    {
    cout << "Resultat: "<< zahl+zahl1 << endl;
    }

    else if (opr == '-')
    {
    cout << "Resultat: "<< zahl-zahl1 << endl;
    }

    else if (opr == '/')
    {
    cout << "Resultat: "<< zahl/zahl1 << endl;
    }

    else if (opr == '*')
    {
    cout << "Resultat: "<< zahl*zahl1 << endl;
    }

    else
    {
    cout << "Keine Operation moeglich!" << endl;
    }

	return 0;
}
