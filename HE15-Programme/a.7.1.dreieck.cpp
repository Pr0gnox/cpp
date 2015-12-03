#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

    int line;

    cout<<"Bitte geben Sie die Anzahl Linien ein: "<<endl;
    cin>>line;

    for(int i = 0; i < line; i++)
        {
        for(int x= 0; x <= i ; x++){
        cout<<"+";
        }
        cout<<endl;
        }


	return 0;
}
