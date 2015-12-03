#include <iostream>
using namespace std ;


int functionAufrufe(){
    int static zahler=0;

    zahler++;


return zahler;
}

int main () {

    int aufrufe=0;

    cout<<"Wie oft soll die Funktion ausgefuehrt werden?"<<endl;
    cin>>aufrufe;


    for(int i=0; i<aufrufe-1; i++){
        functionAufrufe();
    }

    cout<<"Die Funktion wurde "<<functionAufrufe()<<" mal ausgefuehrt"<<endl;

	return 0;
}
