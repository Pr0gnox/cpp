#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
		
	cout << endl;
	cout << "char= " << sizeof (char) << endl;	
	cout << "int= " << sizeof (int) << endl;
	cout << "long= " << sizeof (long) << endl;
	cout << "short= " << sizeof (short) << endl;
	cout << "float= " << sizeof (float) << endl;
	cout << "double= " << sizeof (double) << endl;
	cout << "bool= " << sizeof (bool) << endl;
		
	system("PAUSE");	
		
return 0;
}

/* Berechnung der Maximalen Speichers der verwendet wird für "short": 2 hoch 2*8 = 2 hoch 16
das heisst: "short" kann maximal 2 Zustände mal 16bits abspeichern! 

char = 2 hoch 8
int = 2 hoch 32
long = 2 hoch 32
short = 2 hoch 16
float = 2 hoch 32
double = 2 hoch 64
bool = 2 hoch 8

*/ 