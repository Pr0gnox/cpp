//Zufallszahlen
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
  int z = 0;
  double d = 0;
  srand(time(NULL));//Zufallsgenerator initialisieren
  cout<<"time(): "<<time(NULL)<<endl;

  for(int i = 0; i < 100; i++){  
  cout<<rand()<<endl;
  }
      
  z = rand() % 100;
  cout<<"Die Zufallszahl (int) lautet 1.): "<<z<<endl;
  
  z = rand() % 6 + 1;
  cout<<"Die Zufallszahl (int) lautet 2.): "<<z<<endl;

  d = (double) z / 10;

  cout<<"Die Zufallszahl (double) lautet: "<<d<<endl;

  for(int i = 0; i<10;i++){
    //srand(time(NULL));
    cout<<rand()% 100 + 1<<endl;
  }

  return 0;
}
