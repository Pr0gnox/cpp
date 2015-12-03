#include <iostream>
#include <cmath>
using namespace std ;

int main () {

const unsigned char ae = static_cast<unsigned char>(132); // gibt "ä" aus
const unsigned char oe = static_cast<unsigned char>(148); // gibt "ö" aus

    //Gegebene Werte
    const float pi = 3.14159; //Der Wert von PI
    const float g = 0.00980665; //Erdbeschleunigung m/s*s
    const int re = 6371; //Erdradius in KM

    float h; //höhe in KM
    float ergebnis; //Sekunden
    float ergebnis1; //Minuten
    float ergebnis2; //Stunden

    //Input der Höhe
    cout << "Bitte geben Sie eine h" << oe << "he des Sateliten in KM ein" << endl;
    cin >> h;

    //Berechnung der Umlaufzeit
    ergebnis = (2*pi/re) * sqrt (pow (re+h, 3)/g);

        //Umrechner in Sek./Min./Std.
        ergebnis1 = ergebnis / 60;
        ergebnis2 = ergebnis1 / 60;


    //Ausgabe
    cout << "Die Umlaufzeit betr"<<ae<<"gt: " << ergebnis << " Sekunden oder:" << endl;
    cout << ergebnis1 << " Minuten oder:" << endl;
    cout << ergebnis2 << " Stunden" << endl;

return 0;
}
