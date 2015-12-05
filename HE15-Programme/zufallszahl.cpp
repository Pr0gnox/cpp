#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

    int a=0;
    double b=0;
    srand(time(NULL));

    for(int i=0; i<100; i++){
        cout<<rand()<<endl;
    }


    b=rand() % 100; //Modulo 100 braucht man um zufalls Zahl zwischen 1-99 zu generieren. 100+1 wäre dann Zahlen zwischen 1-100
    cout<<"Die Zahl mit Modulo 100 ist: "<<b<<endl;

	return 0;
}
