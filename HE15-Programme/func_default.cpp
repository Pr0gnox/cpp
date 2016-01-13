//Funktion03 ohne Uebegabetyp
#include<iostream>
using namespace std;

int testFunktion(int , int );


int testFunktion(int x, int y=0){
  if(x < y)
    return x;
  else if(y < x)
    return y;
  else
    return 0;
}

int main(){
  int a(0),b(0);
  cout<<"Versuch mit nur einem Parameter: "<<endl;
  cout<<"Wert eingeben: "; cin>>a;
  cout<<"Die kleinere Zahl lautet: "<<testFunktion(a)<<endl<<endl;

  cout<<"Versuch mit zwei Parametern: "<<endl;
  cout<<"Wert 1 eingeben: "; cin>>a;
  cout<<"Wert 2 eingeben: "; cin>>b;
  cout<<"Die kleinere Zahl lautet: "<<testFunktion(a,b)<<endl;

  return 0;
}
