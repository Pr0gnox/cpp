#include <iostream>
#include <cmath>
using namespace std ;

int main () {

	int jahr;



	//Eingabe
	cout << "Geben Sie ein Jahr ein: " << endl;
	cin >> jahr;


	if (jahr % 100 == 0)
{	
	if (jahr % 400 == 0)
	{
	cout <<"Ihr Jahr: "<< jahr << " ist ein Schaltjahr" << endl;
	}
	else 
	{
	cout << jahr << " ist kein Schaltjahr" << endl;
	}
}
	
	else
{
	if (jahr % 4 == 0)
	{
	cout <<"Ihr Jahr: "<< jahr << " ist ein Schaltjahr" << endl;
	}
	else 
	{
	cout << jahr << " ist kein Schaltjahr" << endl;
	}

}	


	return 0;
}
