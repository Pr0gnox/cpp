#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
int main () {
 
srand((unsigned)time(0));
int counter=1;
int input;
int zz=(rand()%99)+1; //modula 100 = Zufallszahl ist bis 99 // Mit +1 wird die Zufallszahl 1 dazu gezählt damit sie nicht 0 ist
cout <<"Zahl: "<<endl;
cin >>input;
 
 
 
while (input!=zz)
 
{
    if (input <zz)
{cout << "Die gesuchte Zahl ist groesser" <<endl;
cout <<"Groessere Zahl eingeben:"<<endl;
cin >>input;
counter = counter+1;
}
 
else
if(input >zz)
{cout <<"Die gesuchte Zahl ist kleiner"<<endl;
cout <<"Kleinere Zahl eingeben:"<<endl;
cin >>input;
counter = counter+1;
}
}
 
 
cout <<"Die eingegebene Zahl ist korrekt!"<<endl;
cout <<"Sie haben "<<counter<<" Versuche benoetigt"<<endl;
 
 
 
return 0;
}
