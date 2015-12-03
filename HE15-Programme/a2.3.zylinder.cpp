#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

	double hohe;
	double radius;
	float volumen;
	const float pi= 3.1415;

	cout<<"Bitte geben Sie eine Hoehe ein: "<<endl;
	cin>>hohe;

	cout<<"Bitte geben Sie ein radius ein: "<<endl;
	cin>>radius;

    volumen = pow(radius,2)*pi*hohe;
    //... das selbe wie: --> volumen = radius*radius*pi*hohe;  <--

    cout<<"Das Ergebnis ist: "<<volumen<<" qcm"<<endl;


	return 0;
}
