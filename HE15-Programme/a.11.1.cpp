//Aufgabe 11_1
#include<iostream>
using namespace std;

int main(){
  const int anz(4);
  int i(0);
  double z[anz];

  for(i=0; i<anz;++i){
    cout<<"z["<<i<<"] = ";
    cin>>z[i];
  }
  
  cout<<"Ausgabe:"<<endl<<endl;

  for( --i ; i>= 0 ; i--){
    cout<<z[i]<<"    ";
  }
  //cout<<i<<endl;
  return 0;
}
