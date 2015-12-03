#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

    int line;

    cout<<"Bitte Anzahl Linien eingeben"<<endl;
    cin>>line;


    for(int i=0; i<line; line--){
        for(int x=0; x<line; x++){
            cout<<"+";
        }

            if(line%2==0){
                cout<<"KTSI";
            }

        cout<<endl;
    }


	return 0;
}
