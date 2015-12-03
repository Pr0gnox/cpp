#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

    float zahl = 2.5;
    float schritt = 2.5;


    for(float i= 2.5; i <= 20; i+schritt){
        cout<<i<<endl;
        i=i+schritt;
        }


	return 0;
}
