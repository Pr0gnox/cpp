//Aufgabe 11_2
#include<iostream>
using namespace std;

void funcSwap(int*);
void funcSwap(int *x){
  int tmp(0);
  tmp = x[0];    //a[0]      a+0
  x[0] = x[1];   //a[1]       a+1
  x[1] = tmp;
}
void funcSwap(int*, int*);
void funcSwap(int *x, int *y){
 cout<<"x:"<<*x<<"   y:"<<*y<<endl;
 *x = 999;
 *y = 1000; 
}

int main(){
  int a[2];
  for(int i = 0; i <=1; i++){
    cout<<"a["<<i<<"] = ";
    cin>>a[i];
  }
  funcSwap(a+0);    //Uebergabe der Adresse;
  int z(9);
  int u(7);
  funcSwap(&z,&u);
  cout<<z<<endl;
  cout<<u<<endl;

  cout<<"\nDie Werte nach Aufruf der Funktion: "<<endl;

  for(int i = 0; i <= 1; i++){
    cout<<"a["<<i<<"] = "<<a[i]<<endl;
  }
  return 0;
}

        