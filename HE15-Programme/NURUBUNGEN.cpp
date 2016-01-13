#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int test(int x){

    for(int i=0; i< x;i++){
    x++;
    }


return (x);
}


int main () {

    int zahl;
    int erg;
    srand(time(NULL));

    zahl = rand();

    cout<<test(1000)<<endl;


	return 0;
}
