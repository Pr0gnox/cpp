//Aufgabe 9_1
#include<iostream>
using namespace std;
//int global = 12;

//int funcVorzeichen(double );
int funcVorzeichen(double x){
  int rueckgabewert = 0;

  if(x < 0){
    rueckgabewert = -1;
  }
  else if(x > 0){
    rueckgabewert = 1;
  }
  else{
    rueckgabewert = 0;
  }
  return rueckgabewert;
}

int main(){
  double number(0.0);

  cout<<"Geben Sie eine Zahl ein: "; cin>>number;
  //int x = funcVorzeichen(number);

  cout<<"Der Rueckgabewert betraegt : "<<funcVorzeichen(number)<<endl;

  return 0;
}










