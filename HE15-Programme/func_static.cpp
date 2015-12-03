//Funktion03 ohne Uebegabetyp
#include<iostream>
using namespace std;
int y = 99;

void testfunktion();

void testfunktion(){
  int i = 0;
  static int y = 0;
  y++;
  cout<<"y = "<<y<<endl;
}
int main(){
  int y = 23;
  for(int i = 0; i< 10; i++){
    testfunktion();
    }
  cout<<y<<endl;

  return 0;
}
