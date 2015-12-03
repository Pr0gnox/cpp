#include <iostream>
using namespace std ;

int main ( ) {
int min , input ;
	//cout << "1. Zahl: " ;
	//cin >> min ;
	for ( int i=0; i<10; i++) {
		cout << (i+1) << ". Zahl: " ;
		cin >> input ;
		if (input < min) {
			min = input ;
		}
	}
	cout << "Kleinste Zahl: " << min << endl ;
	
	return 0;
}