#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main () {

int n;
int m;

srand((unsigned)time(0));
int Zahlen = rand() % 36 + 1;
int gewinn;

cout <<Zahlen<<endl;

cout <<"Geben sie den maximalen Betrag ein, mit welchem sie spielen moechten"<<endl;
cin >> m;
cout <<"Wieviel setzen sie ein?"<<endl;
cin >> n;

//cout << Zahlen%2;

if (Zahlen%2!=0) //!= heisst ungleich
{
    cout <<"Sie haben "<<n<<" verloren. Ihr Gesmatbetrag betraegt nun "<<m-n<<endl;
}
else
{
    cout <<"Sie haben "<<n<<" gewonnen. Ihr Gesmatbetrag betraegt nun "<<n*2+m<< endl;
}


return 0;
}
