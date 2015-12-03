#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std ;

int main () {

	int m; //Betrag
	int n; //Einsatz
	int counter = 0; //Rundenzähler
	int zahlen = rand() % 36+1; //Zahlen 0-36
	srand((unsigned)time(0));
	
		

	//Eingabe
	cout <<"Bitte geben Sie Ihren Spielbetrag ein: "<< endl;
	cin >> m ;
	cout << "Nun bitte Ihren Einsatz den Sie pro Runde spielen wollen: "<< endl;
	cin >> n ;
	
	//Überprüfung ob Einsatz nicht höher als Spielbetrag
   if (n>m || m<=n)	
   {
	   cout <<"ABBRUCH!!! --> Ihr Einsatz ist hoeher als Ihr Betrag!"<< endl;
	   cout <<"Oder Sie haben keine Zahl eingegeben!"<< endl;
   }
	
	// Roulettespiel
	
	if (zahlen%2!=0)
	{
		cout << "Sie haben "<<n<<" verloren! Ihr aktueller Betrag ist jetzt " <<m-n << endl;
	}
	else
	{
		cout << "Sie haben "<<n<<" gewonnen! Ihr gesamt Betrag ist: "<< m+n << endl;
	}




	
//cout << zahlen%2 << endl;
	
	
	return 0;
}
